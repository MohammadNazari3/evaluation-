/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:32:19 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/30 10:21:34 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (haystack[a + b] && needle[b] && a + b < len)
	{
		if (haystack[a + b] == needle[b])
		{
			b++;
		}
		else
		{
			a++;
			b = 0;
		}
	}
	if (!needle[b])
	{
		return ((char *)&haystack[a]);
	}
	return (NULL);
}
/*
int main (void)
{
	const char *haystack = "The quick brown fox jumps over the lazy dog.";
	const char *needle = "brown";
	char *result = ft_strnstr(haystack, needle, strlen(haystack));
	if (result == NULL)
	{
		printf ("Substring not found.\n");
	}
	else
	{
		printf ("Substring found at position %ld.\n", result - haystack);
	}
	return(0);
}
*/
