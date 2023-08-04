/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:24:58 by mnazari           #+#    #+#             */
/*   Updated: 2023/04/16 12:26:01 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* returing the last node of the linked list */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
