/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:21:09 by mnazari           #+#    #+#             */
/*   Updated: 2023/04/16 12:22:57 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* adding the node to the front of linked list */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}
