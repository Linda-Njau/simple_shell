#include "main.h"

char **make_tokens(char *line)
{
	int buffsize = 1024;
	int capacity = 0;
	char **tokens = malloc (buffsize *sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("");
		exit(1);
	}
	char delimiters = (" \t\r\n");
	char *token = strtok (line, delimiters);

	while (token != NULL)
	{
		token[capacity] = token;
		capacity++;
	if(capacity >= buffsize)
	{
		buffsize += TK_BUFF_SIZE;
		tokens = realloc (tokens, buffsize *sizeof(char));
		if (!tokens)
		{
			perror("");
			exit(1);
		}
	}
	token = strtok (NULL, delimiter);
	}
	tokens[capacity] = NULL;
	return tokens;
}

