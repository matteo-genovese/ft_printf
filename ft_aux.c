/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <mgenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:45:01 by mgenoves          #+#    #+#             */
/*   Updated: 2024/02/20 12:12:23 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'p')
		return (ft_putpointer(va_arg(arg, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (c == 'u')
		return (ft_put_u_nbr(va_arg(arg, unsigned int)));
	if (c == 'x')
		return (ft_put_low_hexadecimal(va_arg(arg, unsigned long long)));
	if (c == 'X')
		return (ft_put_upp_hexadecimal(va_arg(arg, unsigned long long)));
	if (c == '%')
		return (ft_putchar('%'));
	return (count);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

int	ft_len_intnumber(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_len_hexnumber(unsigned int n)
{
	int	count;

	count = 1;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}
