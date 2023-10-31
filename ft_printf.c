/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:23:34 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/31 14:59:52 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char const *format, int *cont)
{
	if (write(1, format, 1) < 0)
		return (-1);
	return (0);
}

int	ft_putstr(char *str);
{
	int	size;
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		
	}
	
}

int	ft_putptr('Mirar');

int	ft_process(char type, va_list ptr)
{
	int	cont;

	cont = 0;
	if (type == 'c')
		cont += ft_putchar(va_arg(ptr, int));
	else if (type == 's')
		cont += ft_putstr(va_arg (ptr, char *));
	else if (type == 'p')
		cont += ft_putptr('Mirar');
	else if (type == 'd' || type == 'i')
		cont += ft_putnbr(va_arg(ptr, nb));
	else if (type == 'u')
		cont += ft_putnbr_uns(va_arg(ptr, unsigned int));
	else if (type == 'x')
		cont += ft_putnbr_hx(va_arg(ptr, int), "0123456789abcdef");
	else if (type == 'X')
		cont += ft_putnbr_hx(va_arg(ptr, int), "0123456789ABCDEF");
	else if (type == '%')
	{
		write (1, "%", 1);
		cont++;
	}
}

int	ft_printf(char const *format, ...)
{
	int				cont;
	va_list			ptr;
	int				i;

	va_start(ptr, format);
	cont = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format [i +1] != 0)
			cont += ft_process(format[i + 1], ptr);
		i++;
		else
		{
			write (1, &format[i], 1);
			cont++;
		}
		i++;
	}
	va_end(ptr);
	return (cont);
}

/*int main()
{
	printf("MI FUNCION:\n");
	ft_printf("test\n");
	printf("LA FUNCION REAL:\n");
	printf(" \n");
}*/
