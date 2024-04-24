/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abednarc <abednarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:39:13 by abednarc          #+#    #+#             */
/*   Updated: 2024/04/24 12:24:58 by abednarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_format(int format, va_list args, int *len)
{

	len = 0;
	if (format == 'c')
	{
		ft_putchar(va_arg(args, int));
		(*len)++;
		return (*len);
	}
	else if (format == 's')
	{
		*len += ft_printstr_l(va_arg(args, char *));
		return (*len);
	}
	else if (format == 'p')
	{
	}
	else if (format == 'i' || format == 'd')
	{
		*len += ft_printnumber_l(va_arg(args, int), len);
		return (*len);
	}
	else if (format == 'u')
	{
		//len = ft_printnumber_u(va_arg(args, unsigned int))
	}
	else if (format == 'x')
	{
	}
	else if (format == 'X')
	{
	}
	else if (format == '%')
	{
		ft_putchar('%');
		(*len)++;
		return (*len);
	}
	return (*len);
} 

int ft_printf(const char *format, ...)
{
	va_list args;
	int	i;
	int len;

	i = 0;
	len = 0;
	va_start(args, format);
	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += ft_format(format[++i], args, &len);
		} 
		else {
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}


int	main(void)
{
	char c;
	char *p;
	int	f;

	p = "annss";
	f = ft_printf("%d\n", 75);
	ft_printf("%i", f);
	c = 'a';
	p = &c;
	//ft_printf("%p", p);

	return (0);
}

