/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuranus <zuranus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:10:13 by zuranus           #+#    #+#             */
/*   Updated: 2021/11/05 03:03:15 by zuranus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "Libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_putchar_c(char c);
int		ft_putnbr_i(int n);
int		ft_putnbr_p(unsigned long len);
int		ft_putnbr_u(long n);
int		ft_putnbr_x(unsigned long int n);
int		ft_putnbr_xx(unsigned int n);
int		ft_putsing(void);
void	ft_putstr_s(char *s);
int		ft_print_s(char *s);
#endif
