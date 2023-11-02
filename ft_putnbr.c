/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:14:13 by yaolivei          #+#    #+#             */
/*   Updated: 2023/11/02 13:12:06 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb <= 9)
		return (ft_putchar(nb % 10 + '0'));
	ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int	ft_putnbr_uns(unsigned int nb)
{
}

int	ft_putnbr_hx(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef"
		if (nb <= 16)
		return (ft_putchar(nb % 16 + '?'));
	ft_putnbr(nb / 16);
	ft_putchar((nb % 16) + '?');
}
