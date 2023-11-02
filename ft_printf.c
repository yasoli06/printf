/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:23:34 by yaolivei          #+#    #+#             */
/*   Updated: 2023/11/02 15:42:46 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char format)
{
	if (write(1, &format, 1) == -1)
		return (-1);
	return (0);
}

int	ft_putstr(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		if (write(1, &str[i], 1) < 0)
			i++;
		cont++;
	}
	return (cont);
}

int	ft_process(char type, va_list ptr)
{
	int	cont;

	cont = 0;
	if (type == 'c')
		cont += ft_putchar(va_arg(ptr, int));
	else if (type == 's')
		cont += ft_putstr(va_arg (ptr, char *));
	else if (type == 'p')
		cont += ft_putptr(va_arg(ptr, unsigned long), "0123456789abcdef");
	else if (type == 'd' || type == 'i')
		cont += ft_putnbr(va_arg(ptr, int));
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
	return (cont);
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
		if (format[i] == '%')
			cont += ft_process(format[i + 1], ptr);
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
/*int main(void)
{
	char	*s = "dos";

	//ft_printf("MI func: %p\n", s);
	printf("SU func: %p\n", s);
	return (0);
}*/
