/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:03:37 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/15 13:10:12 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	sour;
	size_t	temp;

	dest = 0;
	sour = 0;
	while (dst[dest] != '\0' && dest < dstsize)
	{
		++dest;
	}
	while (src[sour] != '\0')
		++sour;
	if (dest == dstsize)
	{
		return (dest + sour);
	}
	temp = dest;
	while (temp < dstsize - 1 && *src)
	{
		dst[temp] = *src;
		++temp;
		++src;
	}
	dst[temp] = '\0';
	return (dest + sour);
}
/*
int	main(void)
{
	char	dst[122] = "Hello";
	char	*src = " world!";

	size_t	n = sizeof(dst)/sizeof(dst[0]);
	size_t len = ft_strlcat(dst, src, n);

	printf("%s\n", dst);
	printf("%zu\n", len);
	return(0);
}
*/
