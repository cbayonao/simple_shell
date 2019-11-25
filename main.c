#include "shell.h"
void start_shell();
void split_str (char *s1);
/*
 * main -funtion principal init program simple shell
 * Return: Zero for Succes
 */
int main(int argc, char *argv[])
{
	welcome_shell();

	if (argc > 1)
	{
	  int j = 1;
	  for (int i = argc - 1; i > 0; i--, j++)
		check_arg(argv[j]);
	}
	else
		start_shell();

   return (0);
} 

void start_shell()
{
	char *buffer;
	int line;

	buffer = create_buffer();
	_printf("$ ");
	line =_atoi(_getline());
	if (line == EOF)
	{
		free(buffer);
		exit(1);
	}
	check_arg(buffer);
	free(buffer);
	start_shell();
}

void split_str(char *s1)
{
   char s2[] = " ,";
   char *ptr;

	ptr = strtok( s1, s2 );
	if (ptr != NULL)
	{
		while(ptr != NULL)
		{
			printf("%s", ptr);
		ptr = strtok(NULL, s2);
		}
	}
}
