/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:31:33 by Mnazari           #+#    #+#             */
/*   Updated: 2023/03/26 11:47:14 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The calloc function allocate block of memory 
for an array element each init with zero */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*dest;

	total_size = size * count;
	dest = (void *)malloc(total_size);
	if (!dest)
	{
		return (0);
	}
	ft_memset(dest, 0, total_size);
	return (dest);
}
