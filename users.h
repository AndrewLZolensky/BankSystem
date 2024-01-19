typedef struct usernode UserNode;

typedef struct user {
        char* username;
        char* password;
        float funds;
} User;

typedef struct usernode {
	UserNode* next;
	User* val;
} UserNode;

/*
Create a new user with username and password
*/
User* createUser(char* username, char* password);

/*
Delete a given user from memory
*/
int deleteUser(User* user);

/*
Create a new user node with User
*/
UserNode* createUserNode(User* user);

/*
Add a new user to linked list "Users"
*/
int addUser(UserNode* users, User* user_ptr);

/*
Delete a user from linked list given username and password
*/
int removeUserFromList(UserNode* users, char* username, char* password);

/*
Check if a user with given credentials (username and password) exists.
If so, return pointer to user. Otherwise, return null.
*/
User* searchUserInList(UserNode* users, char* username, char* password);

/*
Delete entire Users linked list
*/
int deleteAllUsers(UserNode* users);
