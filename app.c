#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "users.h"

int main(){
	char* username = "Andrew";
	char* password = "stars";
	User* newUser = createUser(username, password);
	printf("New use named: %s\n", newUser->username);
	free(newUser->username);
	free(newUser->password);
	free(newUser);
	return(0);
}
