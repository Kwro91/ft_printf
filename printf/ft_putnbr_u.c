/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:45:08 by besalort          #+#    #+#             */
/*   Updated: 2022/12/05 14:40:32 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_putnbr_u(nb / 10);
		count += ft_putchar_i(nb % 10 + 48);
	}
	else
		count += ft_putchar_i(nb + 48);
	return (count);
}
