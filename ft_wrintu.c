/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrintu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:47:15 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/06 15:57:58 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wrintu(unsigned int nbr, int i)
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
	return (i);
}
