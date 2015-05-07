#include <stdio.h>
#include <stdlib.h>

/**
	*
	*/
int printEnvironment(void) {

	char *pwd = getenv("PWD");

	if(pwd) {
		printf("\nPWD is: %s\n",pwd);
		return 0;
	}
	return -1;
}


/**
	*
	*/
int printOneEnvironment(char *env)	{

	const char *some_env = getenv(env);
	
	if(some_env) {
		printf("The value is: %s\n\n",env);
		return 0;
	}
	return -1;
}


/*
char *value;

value = getenv(name);
printf("HOME %s",value);

value = getenv(env);
printf("%s: %s",env,value);

}
*/
