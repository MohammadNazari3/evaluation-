/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:29:24 by mnazari           #+#    #+#             */
/*   Updated: 2023/04/16 12:31:02 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* delete the content of the linkedlist */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del (lst->content);
		free (lst);
	}
}
