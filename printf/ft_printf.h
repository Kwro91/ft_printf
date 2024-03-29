/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:35:16 by besalort          #+#    #+#             */
/*   Updated: 2022/12/05 11:46:50 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include	<stdarg.h>
# include	<string.h>
# include	<stdio.h>
# include	<unistd.h>
# include	<stdlib.h>

int	ft_putchar_i(char c);
int	ft_putstr_i(char *str);
int	ft_putnbr_i(int nb);
int	ft_putnbr_u(unsigned int nb);
int	ft_convertbase(unsigned int nb, int up);
int	ft_adress(void *p);
int	ft_printf(const char *str, ...);
#endif