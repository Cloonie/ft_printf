/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:14:18 by mliew             #+#    #+#             */
/*   Updated: 2022/06/22 22:26:39 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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

int	ft_putunsign(unsigned int n)
{
	if (n < 0)
		n = 4294967296 - n;
	if (n > 9)
		ft_putunsign(n / 10);
	ft_putchar(n % 10 + '0');
	return (ft_numlen(n));
}

// int	main(void)
// {
// 	printf("%u\n", 2147483647);
// 	ft_putunsign(2147483647);
// }