/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:14:13 by yaolivei          #+#    #+#             */
/*   Updated: 2023/11/02 20:36:46 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int			count;
	long int	n;

	n = nb;
	count = 0;
	if (nb < 0)
	{
		ft_putchar ('-');
		n *= -1;
		count++;
	}
	if (n <= 9)
	{
		ft_putchar (n + '0');
		count++;
	}
	else
	{
		count += ft_putnbr (n / 10);
		ft_putchar (n % 10 + '0');
		count++;
	}
	return (count);
}

int	ft_putnbr_uns(unsigned int nb)
{
	int			count;

	count = 0;
	if (nb <= 9)
	{
		ft_putchar (nb + '0');
		count++;
	}
	else
	{
		count += ft_putnbr_uns (nb / 10);
		ft_putchar (nb % 10 + '0');
		count++;
	}
	return (count);
}

// //int	ft_putnbr_hx(unsigned int nb)
// {
// 	char	*base;

// 	base = "0123456789abcdef";
// }
