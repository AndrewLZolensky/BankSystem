#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "users.h"

/*
 * Allocate space for a new user and fill with given username and password.
 * RETURN: pointer to newly created user
 */
User* createUser(char* username, char* password) {

	// allocate space for new user
	User* newUser = (User*) malloc(sizeof(User));
	if (newUser == NULL) {
		fprintf(stderr, "Error allocating memory for new user\n");
	};
	
	// allocate space for username and try to copy username into username field
	newUser->username = (char*) malloc(strlen(username) + 1);
	if (newUser->username == NULL) {
		fprintf(stderr, "Error allocating memory for new username\n");
		free(newUser);
		return NULL;
	};
	strcpy(newUser->username, username);

	// allocate space for password and try to copy password into password field
	newUser->password = (char*) malloc(strlen(password) + 1);
	if (newUser->password == NULL) {
		fprintf(stderr, "Error allocating memory for new password\n");
		free(newUser);
		return NULL;
	};
	strcpy(newUser->password, password);

	// assign 0 funds to user
	newUser->funds = 0;

	return newUser;
}

/*
 * Delete a given user from memory
 * RETURN: status code
*/
int deleteUser(User* user) {
	if (user == NULL) {
		return(0);
	};
	free(user->username);
	free(user->password);
	free(user);
	return(0);
};

/*
 * Add given user to given linked list of user nodes
 * RETURN: status code
 */
int addUserToList(UserNode* head, User* user){

	// allocate space for  new user node
	UserNode* newUserNode = (UserNode*) malloc(sizeof(UserNode));

	//handle possible error
	if (newUserNode == NULL) {
		fprintf(stderr, "Error allocating memory for new User Node\n");
		return(1);
	};

	//
	newUserNode->val = user;
	newUserNode->next = NULL;

	// if list empty, set head to new UserNode
	if (head == NULL) {
		head = newUserNode;
		return(0);
	};

	// otherwise, iterate through linked list until end and append
	UserNode* temp_ptr = head;
       	while (temp_ptr->next) {
	       temp_ptr = temp_ptr->next;
       };
	temp_ptr->next = newUserNode;
	return(0);
};

/*
 * Prints a single User
 */
void printUser(User* user) {
	if (user == NULL) {
		printf("No user to print");
		return;
	};
	printf("User named: %s with password %s and funds %.2f\n", user->username, user->password, user->funds);
	return;
};

/*
 * Print a single UserNode
 */
void printUserNode(UserNode* usernode) {
	if (usernode == NULL) {
		printf("No User Node to print\n");
		return;
	}
	printUser(usernode->val);
	return;
};

/*
 * Print members of the linked list (TO DELETE, FOR DEBUGGING ONLY, NOT SECURE)
 */
void printUserList(UserNode* head) {
	if (head == NULL) {
		printf("Nothing to print\n");
		return;
	};
	UserNode* temp_ptr = head;
	do {
		printUserNode(temp_ptr);
		temp_ptr = temp_ptr->next;
	} while (temp_ptr);
	return;
};
