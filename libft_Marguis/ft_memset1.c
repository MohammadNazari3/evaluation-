/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:33:18 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/18 10:18:58 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
/*
int main(void)
{
	char str[50];
	strcpy(str,"This is string.h library function");
	puts(str);
	ft_memset(str,'$', 5);
	puts(str);
	return(0);
}
*/
