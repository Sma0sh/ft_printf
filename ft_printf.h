/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:23:57 by diteixei          #+#    #+#             */
/*   Updated: 2023/11/08 11:28:57 by diteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_checkarg(va_list args, const char *str, int i, int res);
int	ft_wrichar(int c);
int	ft_wristring(char *str);
int	ft_wrilen(char *str);
int	ft_wrint(int nbr, int i);
int	ft_wrintu(unsigned int nbr, int i);
int	ft_wrihexa(unsigned int nbr, char *base);
int	ft_wrimem(unsigned long long str, char *base);

#endif
