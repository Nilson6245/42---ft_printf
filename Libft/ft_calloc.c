/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:24:38 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:15:53 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	if (str == 0)
		return (0);
	ft_bzero(str, size * nmemb);
	return (str);
}
