/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:14:18 by mliew             #+#    #+#             */
/*   Updated: 2022/06/21 23:04:29 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_putunsign(unsigned int n)
{
	if (n < 0)
		n = 4294967296 - n;
	if (n > 9)
		ft_putunsign(n / 10);
	ft_putchar(n % 10 + '0');
}

// int	main(void)
// {
// 	printf("%u\n", 2147483647);
// 	ft_putunsign(2147483647);
// }