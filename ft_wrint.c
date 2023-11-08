/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:02:24 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/06 15:36:14 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wrint(int nbr, int i)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
	}
	else
	{
		if (nbr < 0)
		{
			nbr *= -1;
			i += ft_wrichar('-');
		}
		while (nbr > 9)
		{
			i = ft_wrint(nbr / 10, i);
			nbr = nbr % 10;
		}
		if (nbr <= 9)
			i += ft_wrichar(nbr + '0');
	}
	return (i);
}
