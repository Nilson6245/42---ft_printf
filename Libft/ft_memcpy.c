/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:13:04 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:46:07 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	ds = (char *) dst;
	sr = (char *) src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (ds);
}
