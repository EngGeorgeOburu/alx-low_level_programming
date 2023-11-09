#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
/**
 *print_all - prints anything
 @format: format string with format specifies
 */
void print_all(const char *const format, ...)
{
	va_list args;
	size_t i;
	char *str;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (i > 0)
			printf(", ");
		while (strchr ("cifs", format[i]  != '\0'))
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			}
		if (str == NULL)
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				str = "nil";
				printf("%s", str);
			}
		}
		i++;
		break;
	}
	va_end(args);
	printf("\n");
	}
}
