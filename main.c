#include "shell.h"
void start_shell();
/*
 * main -funtion principal init program simple shell
 * Return: Zero for Succes
 */
int main(int argc, char *argv[]) 
{

	if (argc > 1)
	{
	int j = 1;
	for (int i = argc - 1; i > 0; i--, j++)
	{
		_printf(argv[j]);
		perror(" ERROR-");
		exit(1);
	}
	}
	else
	{
		welcome_shell();
		start_shell();
	}

   return (0);
} 

void start_shell()
{
	char *buffer;
	size_t bufsize = 64;
	int aux;

	signal(SIGINT, handle_sigint);

	buffer = create_buffer();
	_printf("$ ");
	aux = getline(&buffer, &bufsize, stdin);

	if (aux == EOF)
	{
		free(buffer);
		exit(1);
	}
//	exec_proc(buffer);
	check_arg(buffer);
//	split_str(buffer);
	free(buffer);
	start_shell();
}
