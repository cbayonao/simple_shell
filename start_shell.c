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

	exec_proc(SHELL);
	signal(SIGINT, handle_sigint);
	buffer = create_buffer();
	_printf("$ ");

	char_input = getline(&buffer, &bufsize, stdin);
	if (char_input == EOF || (_strcmp(buffer, "exit 98\n") == 0))
	{
		free(buffer);
		exit(98);
	}

	check_arg(buffer);
	free(buffer);
	start_shell();
}

