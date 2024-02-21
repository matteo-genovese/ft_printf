/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <mgenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:06:31 by mgenoves          #+#    #+#             */
/*   Updated: 2024/02/20 13:56:35 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_put_low_hexadecimal(unsigned long n)
{
	return (ft_putnbr_hex(n, "0123456789abcdef"));
}

int	ft_put_upp_hexadecimal(unsigned long n)
{
	return (ft_putnbr_hex(n, "0123456789ABCDEF"));
}

int	ft_putpointer(void *p)
{
	int	len;

	if (p == NULL)
		return (ft_putstr(NIL_STRING));
	len = ft_putstr("0x");
	len += ft_putnbr_hexp((unsigned long) p, "0123456789abcdef");
	return (len);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len_s;
	char	*str;

	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len_s)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char c)
{
	size_t	len_s1;
	size_t	i;
	char	*str;

	len_s1 = ft_strlen(s1);
	str = (char *)malloc((len_s1 + 2) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len_s1 && s1[i])
		str[i] = s1[i];
	str[len_s1] = c;
	str[len_s1 + 1] = '\0';
	return (str);
}
