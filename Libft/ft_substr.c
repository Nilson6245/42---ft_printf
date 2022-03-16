/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:53:59 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/23 00:34:36 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == 0)
		return (0);
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	i = start;
	j = 0;
	while (j < len && s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
