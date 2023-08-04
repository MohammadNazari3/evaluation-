/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:41:24 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/14 17:24:26 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*sour;

	i = 0;
	dest = (char *)dst;
	sour = (char *)src;
	if (!dest && !sour)
		return (0);
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[20];
	char	src[] ="Hello, world!";

	ft_memcpy (dest, src, sizeof(src));
	printf("Copied string is:%s\n",dest);
	memcpy(dest, src, sizeof(src));
	printf("Copied string is:%s\n",dest);
	return (0);
}
*/
