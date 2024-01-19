#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "users.h"

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

int deleteUser(User* user) {
	if (user == NULL) {
		return(0);
	};
	free(user->username);
	free(user->password);
	free(user);
	return(0);
};
