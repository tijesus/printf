#include "main.h"
/**
 * oconvert_base - convert from base a to b and wite to stdout
 * @a: integer
 * @b: integer
 * Return:  number of characters printed
 */
int oconvert_base(unsigned int a, unsigned int b)
{
	int c;

	if (a / b == 0)
	{
		return (wint((a % b), ZERO));
	}
	c = oconvert_base((a / b), b);
	c += wint((a % b), ZERO);
	return (c);
}

/**
 * o_print - print unsigned int as octal
 * @list_arg: va_list
 * Return: the number of characters printed
 */
int o_print(va_list list_arg)
{
	return (oconvert_base(va_arg(list_arg, unsigned int), OCTAL));
}
