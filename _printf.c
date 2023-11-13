#include "main.h"

/**
 * _printf - funtions to print
 * @format: format string
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
	unsigned int i, sum_char = 0, found;
	va_list list_arg;

	check fmat[] = {
		{"c", char_print}, {"s", str_print}, {"%", per_print}, {"d", dec_print},
		{"i", dec_print}};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list_arg, format);
	while (*format)
	{
		if (*format != '%' && *format != '\0')
		{
			write(1, format, 1);
			sum_char++;
		} else
		{
			format++;
			if (*format == '\0')
				break;
			for (found = 0, i = 0; i < sizeof(fmat) / sizeof(fmat[0]); i++)
			{
				if (*format == *(fmat[i].lett))
				{
					sum_char += fmat[i].func(list_arg);
					found = 1;
					break;
				}
			}
			if (!found)
			{
				write(1, --format, 1);
				sum_char++;
			}
		}
		format++;
	}
	va_end(list_arg);
	return (sum_char);
}
