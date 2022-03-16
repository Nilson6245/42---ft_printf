/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:31:34 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 02:51:31 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *s)
{
	if (s == NULL)
	{
		ft_putstr_s("(null)");
		return (ft_strlen ("(null)"));
	}
	else
	{
		ft_putstr_s(s);
		return (ft_strlen(s));
	}
}
