#include "main.h"

/**
 * x_print - funtions to print
 * @fmt: format string
 * @fmat: an array of checks
 * @list: a va_list
 * @size: the size of fmat
 * Return: 0 success
 */
int x_print(const char *fmt, check *fmat, va_list list, unsigned long size)
{
	unsigned int i, sum_char = 0, found;

	while (*fmt)
	{
		if (*fmt != '%' && *fmt != '\0')
		{
			write(1, fmt, 1);
			sum_char++;
		}
		else
		{
			fmt++;
			if (*fmt == '\0')
				break;
			for (found = 0, i = 0; i < size; i++)
			{
				if (*fmt == *(fmat[i].lett))
				{
					sum_char += fmat[i].func(list);
					found = 1;
					break;
				}
			}
			if (!found)
			{
				write(1, --fmt, 1);
				sum_char++;
			}
		}
		fmt++;
	}
	return (sum_char);
}
