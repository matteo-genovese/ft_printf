/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <mgenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:36:35 by mgenoves          #+#    #+#             */
/*   Updated: 2024/02/11 19:02:39 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	if (!s)
		s = "(null)";
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putstr_rev(char *s)
{
	int	len_s;
	int	i;

	len_s = ft_strlen(s);
	i = len_s;
	while (--i >= 0)
		ft_putchar(s[i]);
	return (len_s);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
