#include "shell.h"
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
