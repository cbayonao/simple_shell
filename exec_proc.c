#include "shell.h"
/**
 * exec_proc - Function that create new PID and execute commands
 *@arg: commands
 * Return:None
 **/
void exec_proc(char *arg)
{
	char *str[2];
	int status, j;
	pid_t id_pdi;

	id_pdi = fork();
	if (id_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	str[0] = arg;
	str[1] = NULL;
	if (id_pdi == 0)
	{
		execve(str[0], str, NULL);
		exit(1);
	}
	id_pdi = wait(&status);
	if ((WIFEXITED(status)) > 0)
	{}
}
