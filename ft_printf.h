/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:36:35 by mliew             #+#    #+#             */
/*   Updated: 2022/06/21 22:55:57 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// main ft_printf function
int		ft_printf(const char *str, ...);

// conversions: cspdiuxX%
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_puthex(unsigned int n);
void	ft_putpointer(unsigned long n);
void	ft_putunsign(unsigned int n);
void	ft_putpercent(void);

#endif