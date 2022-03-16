/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:24:41 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 03:08:18 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(long n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putnbr_i(n / 10);
	return (i += ft_putchar_c ((n % 10) + '0'));
}
