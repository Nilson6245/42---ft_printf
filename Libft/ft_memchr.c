/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:54:01 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:40:03 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char )c)
			return (str + i);
		i++;
	}
	return (NULL);
}
