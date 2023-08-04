/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:21:35 by sasharma          #+#    #+#             */
/*   Updated: 2023/04/02 10:11:28 by sasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	b;
	void	*rtn;

	b = nitems * size;
	rtn = malloc(b);
	if (rtn)
		ft_bzero(rtn, b);
	return (rtn);
}
