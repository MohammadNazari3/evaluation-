/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:35:40 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/14 17:28:14 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (i < dstsize)
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*

int	main(void)
{
	
	char	src[] = "Hello world!";
	char	dst[6];
	size_t len = ft_strlcpy(dst, src, sizeof(dst));
	size_t len_s = strlcpy(dst, src, sizeof(dst));
	
	printf ("src:%s\n", src);
	printf ("dst:%s\n", dst);
	printf ("len:%zu\n", len);
	printf ("len_s:%zu\n", len);
	return (0);
}
*/
