/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:27:29 by phudyka           #+#    #+#             */
/*   Updated: 2022/05/18 11:03:53 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

size_t  ft_parse(va_list arg, char format)
{
    size_t  len;
	
	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_printstr(va_arg(arg, char *));
    else if (format == 'p')
        len += ft_printhex(va_arg(arg, unsigned long), 1, 0);
    else if (format == 'd' || format == 'i')
        len += ft_printnbr(va_arg(arg, int));
    else if (format == 'u')
        len += ft_printnbr(va_arg(arg, unsigned int));
    else if (format == 'x')
        len += ft_printhex(va_arg(arg, unsigned int), 0, 0);
    else if (format == 'X')
        len += ft_printhex(va_arg(arg, unsigned int), 0, 1);
    else if (format == '%')
        len += ft_printchar('%');
		else
			return (len);
	return (len);
}

int ft_printf(const char *format, ...)
{
	va_list	arg;
	size_t  len;

	len = 0;	
	va_start(arg, format);
	if (!format)
	{
        va_end(arg);
		return (0);	
	}
	while (*format)
	{
		if (*format == '%')
			len += ft_parse(arg, *(++format));
		else
			len += write(1, format, 1);
		format++;
	}
    va_end(arg);
	return (len);
}

int main()
{
	int i = -1000;
	int d = 472310;
	char c = 'c';
	char *s = "pespi";
	unsigned int xmin = 1235487893;
	unsigned int xmax = 179346825;
	unsigned int u = 666666;
	unsigned int *p = &u;

	printf("%c %s %p %d %i %u %x %X %%\n", c, s, p, d, i, u, xmin, xmax);
	ft_printf("%c %s %p %d %i %u %x %X %%\n", c, s, p, d, i, u, xmin, xmax);
	return 0;
}
