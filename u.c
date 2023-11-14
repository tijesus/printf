#include "main.h"

/**
 * wunt - write an integer to stdout
 * @c: a number
 * @a: a number
 * Return: the number of things written
 */
int wunt(unsigned long int a, int c)
{
	char b;
	unsigned long int num = a;

	/*base condition*/
	if (num % 10 == num)
	{
		b = num + '0';
		c += write(1, &b, 1);
		return (c);
	}
	/*recursive call*/
	c = wunt(num / 10, c);
	b = (num % 10) + '0';
	c += write(1, &b, 1);
	return (c);
}

/**
 * u_print - print unsigned integers
 * @list_arg: va_list
 * Return: the number of charactrs written
 */
int u_print(va_list list_arg)
{
	return (wunt(va_arg(list_arg, unsigned int), ZERO));
}
