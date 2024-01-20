#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "users.h"

int main(){
	char* username = "Andrew";
	char* password = "stars";
	User* Andrew  = createUser(username, password);
	printUser(Andrew);
	deleteUser(Andrew);
	return(0);
}
