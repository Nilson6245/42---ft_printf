/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:02:29 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 03:11:47 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xx(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_putnbr_xx(n / 16);
		i += ft_putnbr_xx(n % 16);
	}
	else if (n >= 10 && n <= 16)
	{
		n += 7;
		i += ft_putchar_c(n + '0');
	}
	else
		i += ft_putchar_c(n + '0');
	return (i);
}
