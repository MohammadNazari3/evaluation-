/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:26:15 by suprajap          #+#    #+#             */
/*   Updated: 2023/07/18 18:01:54 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, int checkcase)
{
	const char	hexdigits[] = "0123456789ABCDEF";
	const char	hexdigitsl[] = "0123456789abcdef";
	char		hex[21];
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n != 0)
	{
		if (checkcase == 0)
			hex[j++] = hexdigits[n % 16];
		else
			hex[j++] = hexdigitsl[n % 16];
		n /= 16;
	}
	while (j-- > 0)
	{
		write(1, &hex[j], 1);
		i++;
	}
	return (i);
}

int	print_hex32(unsigned int n, int checkcase)
{
	const char	hexdigits[] = "0123456789ABCDEF";
	const char	hexdigitsl[] = "0123456789abcdef";
	char		hex[9];
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n != 0)
	{
		if (checkcase == 0)
			hex[j++] = hexdigits[n % 16];
		else
			hex[j++] = hexdigitsl[n % 16];
		n /= 16;
	}
	while (j-- > 0)
	{
		write(1, &hex[j], 1);
		i++;
	}
	return (i);
}
