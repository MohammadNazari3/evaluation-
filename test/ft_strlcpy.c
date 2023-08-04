/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:35:23 by Mnazari           #+#    #+#             */
/*   Updated: 2023/03/29 21:46:49 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* This funciton copy a string from src to 
dest and ensuring dest is null terminated. */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
