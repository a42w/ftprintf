/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abednarc <abednarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:40:49 by abednarc          #+#    #+#             */
/*   Updated: 2024/04/24 12:32:48 by abednarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_printstr_l(char *c)
{
	int	len;

	len = 0;
	while (*c != '\0')
	{
		len++;
		write(1, c, 1);
		c++;
	}
	return (len);
}

int	ft_printnumber_l(int n, int *len)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return (*len);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		(*len)++;
		return ft_printnumber_l(n, len);
	}
	else if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
		(*len)++; 
	}
	else 
	{
		ft_printnumber_l(n / 10, len);
		c = (n % 10) + '0';
		write(1, &c, 1);
		(*len)++;
	}
	return (*len);
}


/**
int	ft_printnumber_u(unsigned int n)
{

}
**/