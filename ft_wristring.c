/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wristring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:10:43 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/06 10:05:30 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wristring(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		ft_wrichar(str[i]);
		i++;
	}
	return (i);
}
