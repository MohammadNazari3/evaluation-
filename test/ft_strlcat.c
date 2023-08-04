/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:32:05 by Mnazari           #+#    #+#             */
/*   Updated: 2023/03/26 10:43:40 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* This function append a copy of the null terminator string s2
to the end of null terminated string s1 */
size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = 0;
	while (dest[destlen] != '\0' && destlen < destsize)
	{
		destlen++;
	}
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (destlen == destsize)
		return (destlen + srclen);
	i = 0;
	while (src[i] != '\0' && destlen + i < destsize - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
