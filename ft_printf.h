/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <mgenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:33:03 by mgenoves          #+#    #+#             */
/*   Updated: 2024/02/20 13:58:17 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# ifdef __APPLE__
#  define NIL_STRING "0x0"
# endif
# ifdef __unix__
#  define NIL_STRING "(nil)"
# endif

int		ft_printf(const char *format, ...);
int		ft_print_args(char c, va_list arg);
int		ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_put_u_nbr(unsigned int n);
int		ft_put_low_hexadecimal(unsigned long n);
int		ft_put_upp_hexadecimal(unsigned long n);
int		ft_len_intnumber(long n);
int		ft_len_hexnumber(unsigned int n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char c);
int		ft_putstr_rev(char *s);
int		ft_putpointer(void *p);
int		ft_putnbr_hex(unsigned int n, char *s);
int		ft_putnbr_hexp(unsigned long n, char *s);

#endif
