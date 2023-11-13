#include "main.h"
/**
 * char_print - print character
 * @char_arg: name given to varadic list
 * Return: 1 success
*/
int char_print(va_list char_arg)
{
	char c;

	c = va_arg(char_arg, int);
	write(1, &c, 1);
	return (1);
}
