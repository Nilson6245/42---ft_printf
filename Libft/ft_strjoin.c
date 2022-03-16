/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:52:04 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 20:08:49 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2 || s1 == 0 || s2 == 0)
		return (0);
	str = malloc(sizeof(char ) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!(str))
		return (0);
	if (str == 0)
		return (0);
	ft_bzero (str, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcat (str, s1, -1);
	ft_strlcat (str, s2, -1);
	return (str);
}
