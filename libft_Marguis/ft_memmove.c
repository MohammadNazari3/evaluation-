/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:09:51 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/15 13:06:35 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdest;
	const char	*psrc;

	pdest = dst;
	psrc = src;
	if (!pdest && !psrc)
		return (0);
	if (pdest < psrc)
	{
		while (len--)
			*pdest++ = *psrc++;
	}
	else
	{
		pdest = pdest + len - 1;
		psrc = psrc + len - 1;
		while (len--)
			*pdest-- = *psrc--;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[]= "Hello, 12!";
	char	src[] = "Hello, world!";

	printf("Before memmove dest = %s ,src = %s\n",dest,src);
	ft_memmove (dest, src, 9);
	printf ("After memmove dest = :%s ,src = %s\n",dest, src);
	memmove (dest, src, 9);
	printf ("After memmove dest = :%s ,src = %s\n",dest, src);
	return (0);
}
*/
