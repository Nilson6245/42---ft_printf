/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:05:13 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:52:55 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;
	size_t	i;

	ds = (char *)dst;
	sr = (char *)src;
	i = 0;
	if (dst == NULL && sr == NULL)
		return (0);
	if (ds < sr)
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			ds[len] = sr[len];
		}
	}
	return (ds);
}
