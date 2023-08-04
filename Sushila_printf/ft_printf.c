/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:22:35 by suprajap          #+#    #+#             */
/*   Updated: 2023/07/18 17:19:15 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_input(const char *str, va_list arg)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i = print_char(va_arg(arg, int));
	else if (*str == 's')
		i = print_string(va_arg(arg, char *));
	else if (*str == 'd' || *str == 'i')
		i = print_int(va_arg(arg, int));
	else if (*str == 'u')
		i = print_unsigned(va_arg(arg, int));
	else if (*str == 'X')
		i = print_hex32(va_arg(arg, int), 0);
	else if (*str == 'x')
		i = print_hex32(va_arg(arg, int), 1);
	else if (*str == 'p')
		i = print_pointer(va_arg(arg, const void *));
	else if (*str == '%')
		i = write(1, "%", 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list			arg;
	int				i;
	unsigned int	len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i] != 0)
	{
		if (str[i] == '%' && str[i + 1] != 0)
		{
			len = len + check_input(&str[i + 1], arg);
			i = i + 2;
		}
		else
		{
			print_char(str[i]);
			i++;
			len++;
		}
	}
	va_end(arg);
	return (len);
}
