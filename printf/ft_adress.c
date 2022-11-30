/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:46:42 by besalort          #+#    #+#             */
/*   Updated: 2022/11/30 13:58:21 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_adress(void *p)
{
	int count;

	count = 0;
	if (p == NULL)
		return (ft_putstr_i("(nil)"));
	else
	{
		count += ft_putstr_i("0x");
		count += ft_convertbase((unsigned long int)p, 0);
	}
	return (count);
}