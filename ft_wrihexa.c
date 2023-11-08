/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrihexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:11:54 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/06 17:02:40 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wrihexa(unsigned int nbr, char *base)
{
	int	basev;
	int	i;
	int	count;
	int	nwri[100];

	i = 0;
	count = 0;
	basev = ft_wrilen(base);
	if (nbr == 0)
		count = ft_wrichar('0');
	while (nbr)
	{
		nwri[i] = nbr % basev;
		nbr = nbr / basev;
		i++;
	}
	while (--i >= 0)
	{
		write(1, &base[nwri[i]], 1);
		count++;
	}
	return (count);
}
