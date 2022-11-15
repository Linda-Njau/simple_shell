#include "main.h"
char* get_command()
{
	char *command = NULL;
	size_t buffer = 0;
	errno = 0;
	ssize_t _strlen = getline(&command, &buffer, stdin);

	if (_strlen < 0)
	{
		if(errno)
			perror("$ ");
		exit(1);
	}
	return command;
}



		
