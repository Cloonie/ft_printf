/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:56:28 by mliew             #+#    #+#             */
/*   Updated: 2022/06/23 19:07:37 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(unsigned long n)
{
	if (n >= 16)
	{
		ft_putaddress(n / 16);
		ft_putaddress(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
	}
}

int	ft_putpointer(unsigned long n)
{
	ft_putstr("0x");
	ft_putaddress(n);
	return (14);
}

// int	main(void)
// {
// 	ft_putpointer((unsigned long)"william");
// 	printf("\n%p\n", "william");
// }
