/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxfun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:47:58 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/06 10:29:31 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wrichar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_wrilen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
