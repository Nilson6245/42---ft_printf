/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:05:40 by zuranus           #+#    #+#             */
/*   Updated: 2021/10/20 19:32:06 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*entry;

	entry = *lst;
	while (entry)
	{
		tmp = entry->next;
		if (del)
		{
			del(entry->content);
		}
		free(entry);
		entry = tmp;
	}
	*lst = NULL;
}
