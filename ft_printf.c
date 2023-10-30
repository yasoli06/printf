/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:23:34 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/30 20:11:44 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char const *format, int *cont)
{
	if (write(1, format, 1) < 0)
		return (-1);
	return (0);
}

int	ft_printf(char const *format, ...)
{
	int				cont;
	va_list			ptr;
	int				i;

	va_start(ptr, format);
	cont = 0;
	while (format[i])
	{
		if (format[i] == '%')
			ft_test(++format[i], cont, ptr);
		else
		{
			ft_putchar(format, &cont);
			format++;
		}
	}
	va_end(ptr);
	return (cont);
}

/*int main()
{
	printf("MI FUNCION:\n");
	ft_printf("holis\n");
	printf("LA FUNCION REAL:\n");
	printf("holis\n");
}*/
