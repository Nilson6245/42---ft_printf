/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:57:55 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:30:27 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;
	t_list	*b;

	a = new;
	b = *lst;
	if (b)
	{
		while (b->next)
			b = b->next;
		b->next = a;
	}
	else
		*lst = a;
}
