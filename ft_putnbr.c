/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <mgenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:41:06 by mgenoves          #+#    #+#             */
/*   Updated: 2024/02/20 13:57:32 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else
		ft_putchar(n + 48);
	return (ft_len_intnumber(n));
}

int	ft_put_u_nbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else
		ft_putchar(n + 48);
	return (ft_len_intnumber(n));
}

int	ft_putnbr_hex(unsigned int n, char *s)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_putnbr_hex(n / 16, s);
	i += ft_putchar(s[n % 16]);
	return (i);
}

int	ft_putnbr_hexp(unsigned long n, char *s)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_putnbr_hexp(n / 16, s);
	i += ft_putchar(s[n % 16]);
	return (i);
}
