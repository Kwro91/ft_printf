/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:44:21 by besalort          #+#    #+#             */
/*   Updated: 2022/11/30 13:50:28 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putnbr_i(int nb)
{
	int		count;

	count = 0;
	if (nb == -2147483648)
		return (ft_putstr_i("-2147483648"));
	if (nb < 0)
	{
		nb = -nb;
		count += ft_putchar_i('-');
	}
	if (nb > 9)
	{
		count += ft_putnbr_i(nb / 10);
		count += ft_putchar_i(nb % 10 + 48);
	}
	else
		count += ft_putchar_i(nb + 48);
	return (count);
}