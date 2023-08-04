/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:26:33 by suprajap          #+#    #+#             */
/*   Updated: 2023/07/18 18:02:54 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_unsigned(unsigned int n)
{
	long	num;
	char	str[10];
	int		i;
	int		j;

	i = 0;
	num = n;
	if (num == 0)
	{
		i = 1;
		str[0] = '0';
	}
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	j = i;
	while (i > 0)
		print_char(str[--i]);
	return (j);
}
