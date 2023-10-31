/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:16:59 by yaolivei          #+#    #+#             */
/*   Updated: 2023/10/31 14:50:33 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char const *format, int *cont);
int	ft_process(char type, va_list ptr);
int	ft_putstr(va_arg (ptr, char *));
int	ft_putptr('Mirar');

#endif