#include "main.h"

int main (void)
{
	while (true)
	{
		_putchar('$');
		_putchar(' ');
	{
		char *command = get_command();
		char **tokens = make_tokens(command);

		if (tokens[0] != NULL)
			create_process(tokens);
		free (command);
		free (tokens);
	}
}
