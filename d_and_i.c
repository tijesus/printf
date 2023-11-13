#include "main.h"
/**
 * wint - write an integer to stdout
 * @c: a number
 * @a: a number
 * Return: the number of things written
 */
int wint(int a, int c)
{
	char b;
	/*if a is negative, print - and make a positive*/
	if (a < 0)
	{
		b = '-';
		c += write(1, &b, 1);
		a = -a;
	}
	/*base condition*/
	if (a % 10 == a)
	{
		b = a + '0';
		c += write(1, &b, 1);
		return (c);
	}
	/*recursive call*/
	c = wint(a / 10, c);
	b = (a % 10) + '0';
	c += write(1, &b, 1);
	return (c);
}

/**
 * dec_print - prints a decimal
 * @char_arg: va_list
 * Return: - the number of characters printed
 */
int dec_print(va_list char_arg)
{
	return (wint(va_arg(char_arg, int), ZERO));
}
