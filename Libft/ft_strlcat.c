/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:18:09 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/14 17:02:16 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lends;

	lends = ft_strlen(dst);
	if (size <= lends)
		return (ft_strlen(src) + size);
	i = 0;
	while (dst[i] && (i < size - 1))
		i++;
	j = 0;
	while (src[j] && (i < size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lends + ft_strlen(src));
}
