#include "shell.h"
/**
 * start_shell -funtion that runs the shell
 * Return : None
 **/
void start_shell(void)
{
	char *buffer;
	size_t bufsize = 64;
	int char_input;

	signal(SIGINT, handle_sigint);
	buffer = create_buffer();
	_printf("$ ");

	char_input = getline(&buffer, &bufsize, stdin);
	if (char_input == EOF || (_strcmp(buffer, "exit\n") == 0))
	{
		free(buffer);
		exit(1);
	}
	check_arg(buffer);
	free(buffer);
	start_shell();
}

