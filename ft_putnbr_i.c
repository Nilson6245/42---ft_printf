/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:15:02 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 03:06:08 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_i(int n)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	i = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (i);
}
