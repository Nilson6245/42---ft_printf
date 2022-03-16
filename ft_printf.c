/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:28:14 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 03:14:09 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_bulkhead(char format, va_list argv)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_putchar_c(va_arg (argv, int));
	else if (format == 's')
		i += ft_print_s(va_arg (argv, char *));
	else if (format == 'p')
		i += ft_putnbr_p(va_arg (argv, unsigned long int));
	else if (format == 'd')
		i += ft_putnbr_i(va_arg (argv, int));
	else if (format == 'i')
		i += ft_putnbr_i(va_arg (argv, int));
	else if (format == 'u')
		i += ft_putnbr_u(va_arg (argv, unsigned int));
	else if (format == 'x')
		i += ft_putnbr_x(va_arg (argv, unsigned int));
	else if (format == 'X')
		i += ft_putnbr_xx(va_arg (argv, unsigned int));
	else if (format == '%')
		i += ft_putsing();
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	argv;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	va_start (argv, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			l += ft_printf_bulkhead(format[i + 1], argv);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			l++;
		}
		i++;
	}
	va_end (argv);
	return (l);
}
