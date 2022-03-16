/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:27:38 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 20:06:07 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*s1;

	i = 0;
	while (src[i] != '\0')
		i++;
	s1 = malloc(sizeof(char) * i + 1);
	if (!(s1))
		return (0);
	j = 0;
	while (j <= i)
	{
		s1[j] = src[j];
		j++;
	}
	return (s1);
}
