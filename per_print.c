#include "main.h"
/**
 * per_print - print character
 * @char_arg: name given to varadic list
 * Return: 1 success
*/
int per_print(va_list char_arg)
{
	char p;

	(void)char_arg;
/*	p = va_arg(char_arg, int);*/
    p = '%';
	write(1, &p, 1);
	return (1);
}
