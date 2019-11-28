#include "shell.h"
/**
 * main -funtion principal init program simple shell
 *@argc: number parameters
 *@argv: char pointer
 * Return: Zero for Succes
 **/
int main(int argc, char *argv[])
{
	int j = 1, i;

	if (argc > 1)
	{
		for (i = argc - 1; i > 0; i--, j++)
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
