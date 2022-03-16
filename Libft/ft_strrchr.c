/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:03:25 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/22 20:32:27 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	flag;

	flag = 0;
	while (*str)
	{
		if (*str == (char)ch)
			flag = 1;
		str++;
	}
	while (flag == 1)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str--;
	}
	if (ch == '\0')
		return ((char *)str);
	return (0);
}
