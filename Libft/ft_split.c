/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:17:19 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/22 18:16:32 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_countrow(char const *s, char c)
{
	int	row;

	row = 1;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s != '\0')
				row++;
		}
		else
			s++;
	}
	return (row);
}

static int	ft_len(const char *s, char c)
{
	int	i;

	i = 0;
	while ((*s != c) && (*s))
	{
		s++;
		i++;
	}
	return (i);
}

static void	ft_freearr(char **str, int row)
{
	while (row >= 0)
	{
		free(str[row]);
		row--;
	}
	free(str);
}

static char	**ft_split_1(char **str, char c, int row, const char *s)
{
	int	i;
	int	len;

	i = 0;
	while (i < row)
	{
		while (*s == c && *s)
			s++;
		len = ft_len(s, c);
		if (*s == '\0')
			str[i] = NULL;
		else
		{
			str[i] = ft_substr (s, 0, len);
			if (!(str[i]))
			{
				ft_freearr(str, i);
				return (NULL);
			}
			s = s + len;
		}
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		row;

	if (s == 0)
		return (NULL);
	row = ft_countrow(s, c);
	if ((!(s)) || !(row))
		return (NULL);
	str = (char **)ft_calloc(sizeof(char *), row + 1);
	if (!(str))
		return (NULL);
	str = ft_split_1(str, c, row, s);
	if (!(str))
		return (NULL);
	return (str);
}
