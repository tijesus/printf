#include "main.h"

/**
 * convert_base - convert from base a to b and wite to stdout
 * @a: integer
 * @b: integer
 * Return:  number of characters printed
 */
int convert_base(unsigned int a, unsigned int b)
{
	int c;

	if (a / b == 0)
	{
		return (wint((a % b), ZERO));
	}
	c = convert_base((a / b), b);
	c += wint((a % b), ZERO);
	return (c);
}

/**
 * u_to_b - print unsigned int as binary
 * @list_arg: va_list
 * Return: the number of characters printed
 */
int u_to_b(va_list list_arg)
{
	return (convert_base(va_arg(list_arg, unsigned int), BINARY));
}
