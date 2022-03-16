/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:10:17 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 20:18:27 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	i;
	size_t	ns;

	ns = ft_strlen(src);
	i = 0;
	if (n <= 0)
		return (ns);
	else
		len = n - 1;
	while (src[i] && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ns);
}
