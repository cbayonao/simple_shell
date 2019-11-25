#include "shell.h"
/**
 * start_shell -funtion that runs the shell
 * Return : None
 **/
void start_shell(void)
{
	char *buffer;
	size_t char_input;

	welcome_shell();
	buffer = create_buffer();
	_printf("$ ");
	char_input = _atoi(_getline());
//	check_arg(buffer);
	free(buffer);
	start_shell();
}

