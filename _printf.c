#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i, sum_char = 0, found = 0;

	check fmat[] = {
		{"%c", char_print}, {"%s", str_print}, {"%%", per_print},
	};
	va_list list_arg;

	if (format == NULL)
		return (-1);
	va_start(list_arg, format);
	while (*format)
	{
		if (*format != '%' && *format != '\0')
		{
			write(1, format, 1);
			sum_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			for (i = 0; i < sizeof(fmat) / sizeof(fmat[0]); i++)
			{
				if (strcmp(fmat[i].lett, format) == 0)
				{
					sum_char += fmat[i].func(list_arg);
					found = 1;
					break;
				}
			}
			if (!found)
			{
				write(1, format - 1, 1);
				sum_char++;
			}
		}
		format++;
	}
	va_end(list_arg);
	return (sum_char);
}
