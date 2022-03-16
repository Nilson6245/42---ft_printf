/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:08:47 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:05:59 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	long int	res;
	int			negative;

	negative = 1;
	res = 0;
	while ((*str && *str == ' ') || (*str >= '\t' && *str <= '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	if (res < 0)
	{
		if (negative < 0)
			return (0);
		else
			return (-1);
	}
	return (res * negative);
}
