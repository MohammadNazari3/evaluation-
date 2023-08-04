/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:24:52 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/18 11:00:14 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n--)
		*str++ = 0;
}
/*
int	main()
{
	char	str[10]= "Hello";

	printf ("Before: %s\n", str);
	ft_bzero (str, 10);
	printf ("After: %s\n", str);
	return 0;
}
*/
