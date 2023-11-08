/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrimem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:06:12 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/08 12:06:20 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_wrihexanlim(unsigned long long str, char *base, int i);

int	ft_wrimem(unsigned long long str, char *base)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		i = ft_wristring ("(nil)");
		return (i);
	}
	i += ft_wristring("0x");
	i = ft_wrihexanlim(str, base, i);
	return (i);
}

static int	ft_wrihexanlim(unsigned long long str, char *base, int i)
{
	int	nwri[100];
	int	j;
	int	basev;

	j = 0;
	basev = ft_wrilen(base);
	while (str)
	{
		nwri[j] = str % basev;
		str = str / basev;
		j++;
	}
	while (--j >= 0)
	{
		write(1, &base[nwri[j]], 1);
		i++;
	}
	return (i);
}
