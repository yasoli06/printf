/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:16:59 by yaolivei          #+#    #+#             */
/*   Updated: 2023/11/02 20:28:42 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_process(char type, va_list ptr);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putnbr_uns(unsigned int nb);

#endif