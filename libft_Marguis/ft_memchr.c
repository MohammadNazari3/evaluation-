/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:54:49 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/28 18:23:38 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
	char str[] = "Hello, word!";
	char *p = (char *) ft_memchr(str, 'w', strlen(str));
	if (p != NULL)
	{
		printf("Found '%c' at position %ld\n", *p, p -str);
	}
	else
	{
		printf("Character not found\n");
	}
	return 0;
}
*/
