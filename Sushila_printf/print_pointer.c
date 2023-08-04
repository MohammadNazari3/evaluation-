/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:25:22 by suprajap          #+#    #+#             */
/*   Updated: 2023/07/18 18:02:27 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(const void *ptr)
{
	unsigned long	i;

	write(1, "0x", 2);
	i = print_hex((unsigned long)ptr, 1);
	return (i + 2);
}
