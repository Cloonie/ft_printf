/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:28:56 by mliew             #+#    #+#             */
/*   Updated: 2022/06/21 23:04:31 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_puthex(unsigned int n)
{
	if (n >= 16)
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
	}
}

// int	main(int ac, char **av)
// {
// 	int hex = atoi(av[1]);

// 	if (ac == 2)
// 	{
// 		ft_puthex(hex);
// 		printf("\n%x\n", hex);
// 	}
// 	else
// 		return (0);
// }