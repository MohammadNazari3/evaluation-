/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:13:14 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/06 16:27:00 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* this function calculate the lenght of integer */

static int	get_num_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
/* this function fill the the string with digit
by extracting each digit and convert to char */

static void	fill_str(char *str, int n, int len, int sign)
{
	int	digit;

	str[len] = '\0';
	while (len--)
	{
		if (n < 0)
			digit = -(n % 10);
		else
			digit = n % 10;
		str[len] = digit + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}
/* this function conver an integer to stirng */

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = get_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_str(str, n, len, sign);
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n1 = 123;
	int n2 = -456;
	int n3 = 0;
	char *str1, *str2, *str3;

	str1 = ft_itoa(n1);
	str2 = ft_itoa(n2);
	str3 = ft_itoa(n3);

	printf("Number: %d, String: %s\n", n1, str1);
	printf("Number: %d, String: %s\n", n2, str2);
	printf("Number: %d, String: %s\n", n3, str3);

	free(str1);
	free(str2);
	free(str3);

	return (0);
}
*/