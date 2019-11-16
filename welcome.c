#include "shell.h"
#define USER getenv("USER")
/**
 * welcome_shell -Funtion that display a message of welcome
 * Return: None
 */

void welcome_shell(void)
{
	char *username;

	username = USER;

	_printf("\n\n******************************************");
	_printf("\n******************************************");
	_printf("\n\n\t**WELCOME TO SIMPLE SHELL**");
	_printf("\n\n\t\t");
	_printf(username);
	_printf("\n\n******************************************");
	_printf("\n******************************************");
	_printf("\n\n");
}
