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
	long int num = a;

	/*if a is negative, print - and make a positive*/
	if (num < 0)
	{
		b = '-';
		c += write(1, &b, 1);
		num = -num;
	}
	/*base condition*/
	if (num % 10 == num)
	{
		b = num + '0';
		c += write(1, &b, 1);
		return (c);
	}
	/*recursive call*/
	c = wint(num / 10, c);
	b = (num % 10) + '0';
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
