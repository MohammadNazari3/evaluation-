/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 12:17:04 by mnazari           #+#    #+#             */
/*   Updated: 2023/04/16 12:20:33 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* in this funtion creating a new node in
 * linked list */

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (new_node = NULL);
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}
