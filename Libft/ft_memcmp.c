/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:40:22 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 20:47:28 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*len;
	size_t			i;

	str = (unsigned char *) s1;
	len = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str[i] == len[i])
		{
			i++;
		}
		else
			return (str[i] - len[i]);
	}
	return (0);
}
