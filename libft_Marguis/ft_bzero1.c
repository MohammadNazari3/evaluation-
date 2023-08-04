/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 09:27:14 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/18 10:39:09 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero1(void *s, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	if (n == 0)
		return ;
	{
		tmp[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[10];

	str = "Hello";
	printf ("Before:%s\n", str);
	ft_bzero1 (str, 10);
	bzero (str, 10);
	printf ("After:%s\n", str);
	return (0);
}
*/
