/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:54:03 by smachado          #+#    #+#             */
/*   Updated: 2026/06/11 18:05:15 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

int		ft_printf(const char *fstr, ...);
int		string_validator(const char *str);

int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_exec(va_list	*args, const char fstr);
void	ft_putnbr(int nb, int *ptr);
void	ft_putnbr_unsigned(unsigned int nb, int *ptr);
void	ft_puthex(unsigned long n, int *ptr);
void	ft_puthex_upper(unsigned long n, int *ptr);
int		ft_putptr(void *ptr, int *ptrlen);

#endif