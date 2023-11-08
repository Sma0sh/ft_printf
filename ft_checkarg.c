/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:47:14 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/08 11:36:40 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkarg(va_list ls, const char *str, int i, int res)
{
	if (str[i] == 'c')
		res = ft_wrichar(va_arg(ls, int));
	if (str[i] == 's')
		res = ft_wristring(va_arg(ls, char *));
	if (str[i] == 'p')
		res = ft_wrimem(va_arg(ls, unsigned long long), "0123456789abcdef");
	if (str[i] == 'i' || str[i] == 'd')
		res = ft_wrint(va_arg(ls, int), 0);
	if (str[i] == 'u')
		res = ft_wrintu(va_arg(ls, unsigned int), 0);
	if (str[i] == 'x')
		res = ft_wrihexa(va_arg(ls, unsigned int), "0123456789abcdef");
	if (str[i] == 'X')
		res = ft_wrihexa(va_arg(ls, unsigned int), "0123456789ABCDEF");
	if (str[i] == '%')
		res = ft_wrichar('%');
	return (res);
}
