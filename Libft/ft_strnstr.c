/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:18:01 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/21 13:19:13 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	char	*ha;
	char	*ne;

	ha = (char *) haystack;
	ne = (char *) needle;
	i = 0;
	if (ne[0] == '\0')
		return (ha);
	while (ha[i] && (i < len))
	{
		n = 0;
		if (ha[i] == ne[n])
		{
			while (i + n < len && ha[i + n] && ne[n] && ha[i + n] == ne[n])
			{
				if (ne [n + 1] == '\0')
					return (ha + i);
				n++;
			}
		}
		i++;
	}
	return (0);
}
