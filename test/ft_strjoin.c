/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:46:30 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/01 13:48:52 by mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* the function cancatenate two string into a new string*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		str1;
	int		str2;
	char	*tab;
	int		i;

	if (!s1 || !s2)
		return (0);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	i = 0;
	tab = (char *)malloc(sizeof(char) *(str1 + str2 + 1));
	if (!tab)
		return (0);
	while (*s1 != '\0')
	{
		tab[i++] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		tab[i++] = *s2;
		s2++;
	}
	tab[i] = '\0';
	return (tab);
}
