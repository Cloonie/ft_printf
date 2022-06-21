/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:05:34 by mliew             #+#    #+#             */
/*   Updated: 2022/06/21 23:07:07 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printf_format(va_list ptr, const char fmt)
{
	if (fmt == 'c')
		ft_putchar(va_arg(ptr, int));
	else if (fmt == 's')
		ft_putstr(va_arg(ptr, char *));
	else if (fmt == 'p')
		ft_putpointer(va_arg(ptr, unsigned long));
	else if (fmt == 'd' || fmt == 'i')
		ft_putnbr(va_arg(ptr, int));
	else if (fmt == 'u')
		ft_putunsign(va_arg(ptr, unsigned int));
	else if (fmt == 'x' || fmt == 'X')
		ft_puthex(va_arg(ptr, unsigned int));
	else if (fmt == '%')
		ft_putpercent();
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ptr;
	int res;

	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printf_format(ptr, str[i + 1]);
			i++;
		}
		else
			printf_format(ptr, str[i]);
		i++;
	}
	va_end(ptr);
	return (res);
}
