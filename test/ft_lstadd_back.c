/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:26:34 by mnazari           #+#    #+#             */
/*   Updated: 2023/04/16 12:28:53 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* adding the new node to the end of linked list */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		back = ft_lstlast(*lst);
		back -> next = new;
	}
}
