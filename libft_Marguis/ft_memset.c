/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:33:18 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/18 11:02:16 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)

{
	char	*str;

	str = s;
	while (len--)
		*str++ = c;
	return (s);
}
/*
int	main(void)
{
	char	str[50];

	strcpy (str, "This is string.h library function");
	puts (str);
	ft_memset (str, '$', 5);
	puts (str);
	return (0);
}
*/
