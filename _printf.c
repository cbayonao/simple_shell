#include "shell.h"
/**
 * _printf -Function that display arguments entered into shell
 * @str: pointer with information from buffer
 * Return: type data ssize_t
 **/
int _printf(char *str)
{
	ssize_t write_file;
	size_t len;

	len = _strleng(str);
	write_file = write(1, str, len);

return (write_file);
}

