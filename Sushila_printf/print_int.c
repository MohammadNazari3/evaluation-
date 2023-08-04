/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:25:56 by suprajap          #+#    #+#             */
/*   Updated: 2023/07/18 18:02:10 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(long n)
{
	char	str[10];
	int		i;
	int		j;

	i = 0;
	j = n <= 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	else if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	j += i;
	while (i > 0)
		print_char(str[--i]);
	return (j);
}
