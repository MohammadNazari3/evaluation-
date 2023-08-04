/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:41:42 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/15 15:13:43 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* The function search for the first occurence of character c in the string 
and return a pointer to the character or null if the character not found */

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
