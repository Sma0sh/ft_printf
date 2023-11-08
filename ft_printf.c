/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:32:54 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/08 12:07:22 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ls;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(ls, s);
	while (s[i])
	{
		if (s[i] == '%')
			res += ft_checkarg(ls, s, ++i, res);
		else
			res += ft_wrichar(s[i]);
		i++;
	}
	va_end(ls);
	return (res);
}
