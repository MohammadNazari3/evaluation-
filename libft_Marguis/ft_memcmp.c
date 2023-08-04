/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:07:21 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/28 18:24:46 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello, world!";

	int result = ft_memcmp(str1,str2, strlen(str1));
	if (result == 0)
	{
		printf("The two strings are equal.\n");
	}
	else if (result < 0)
	{
		printf("'%s' is less than '%s'.\n",str1, str2);
	}
	else
	{
		printf("'%s' is greater than '%s'.\n",str1, str2);
	}
	return 0;
}
*/
