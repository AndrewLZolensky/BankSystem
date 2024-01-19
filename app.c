#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "users.h"

int main(){
	char* username = "Andrew";
	char* password = "stars";
	User* newUser = createUser(username, password);
	printf("New user named: %s\n", newUser->username);
	printf("New user password: %s\n", newUser->password);
	printf("Funds available: $%.2f\n", newUser->funds);
	deleteUser(newUser);
	return(0);
}
