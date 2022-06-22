/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:05:34 by mliew             #+#    #+#             */
/*   Updated: 2022/06/22 22:47:11 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list ptr, const char fmt)
{
	int	res;

	res = 0;
	if (fmt == 'c')
		res += ft_putchar(va_arg(ptr, int));
	else if (fmt == 's')
		res += ft_putstr(va_arg(ptr, char *));
	else if (fmt == 'p')
		res += ft_putpointer(va_arg(ptr, unsigned long));
	else if (fmt == 'd' || fmt == 'i')
		res += ft_putnbr(va_arg(ptr, int));
	else if (fmt == 'u')
		res += ft_putunsign(va_arg(ptr, unsigned int));
	else if (fmt == 'x' || fmt == 'X')
		res += ft_puthex(va_arg(ptr, unsigned int));
	else if (fmt == '%')
		res += ft_putchar('%');
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			res += check_format(ptr, str[i + 1]);
			i++;
		}
		else
			res += check_format(ptr, str[i]);
		i++;
	}
	va_end(ptr);
	return (res);
}
