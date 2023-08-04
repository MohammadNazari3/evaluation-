/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:00:02 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/14 20:57:18 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_int_length(int n)
{
	size_t	out;

	if (n == 0)
		return (1);
	out = 0;
	if (n < 0)
		out += 1;
	while (n != 0)
	{
		n = n / 10;
		out ++;
	}
	return (out);
}

char	*ft_itoa(int n)
{
	char	*output;
	size_t	length;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	length = get_int_length(n);
	output = (char *)malloc(sizeof(char) * length + 1);
	if (!output)
		return (NULL);
	if (n < 0)
	{
		output[0] = '-';
		n = -n;
	}
	output[length] = '\0';
	while (n != 0)
	{
		output[length - 1] = (n % 10) + '0';
		n = n / 10;
		length--;
	}
	return (output);
}
