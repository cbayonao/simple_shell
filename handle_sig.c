#include "shell.h"
/**
 * handle_sigint - Funtion that blocked or interrupt the signal
 * when user press ctrl-c
 *@sig: number when the signal is blocked
 *Return: none
 **/
void handle_sigint(int sig)
{
	char aux[1];

	_printf("\nCaught signal Ctrl + c ");
	aux[0] = (sig + '0');
	_printf("(");
	_printf(aux);
	_printf(")");
	_printf("\n");
}
