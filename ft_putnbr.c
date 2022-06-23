/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:09:51 by mliew             #+#    #+#             */
/*   Updated: 2022/06/23 19:07:37 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(long n)
{
	int	ft_numlen;

	ft_numlen = 0;
	if (n == '\0')
		return (1);
	if (n < 0)
	{
		n *= -1;
		ft_numlen++;
	}
	while (n > 0)
	{
		n /= 10;
		ft_numlen++;
	}
	return (ft_numlen);
}

int	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
	return (ft_numlen(n));
}
