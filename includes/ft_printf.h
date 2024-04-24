/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abednarc <abednarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:35:25 by abednarc          #+#    #+#             */
/*   Updated: 2024/04/24 12:24:56 by abednarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
void	ft_putchar(int c);
int	ft_printstr_l(char *c);
int ft_printnumber_l(int n, int *len);
int	ft_printnumber_u(unsigned int n);

#endif