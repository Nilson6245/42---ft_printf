/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:05:13 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 03:10:23 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned long int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_putnbr_x(n / 16);
		i += ft_putnbr_x(n % 16);
	}
	else if (n >= 10 && n <= 16)
	{
		n += 39;
		i += ft_putchar_c(n + '0');
	}
	else
		i += ft_putchar_c(n + '0');
	return (i);
}
