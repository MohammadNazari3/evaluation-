/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:39:32 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/15 13:08:26 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	len;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, len + 1);
	return (out);
}
/*
int main(void)
{
	//char str[] = "";
	char set[] = " \t\n";

	printf("Original string: %s\n", str);
	char *trimmed = ft_strtrim(str, set);
	printf("Trimmed string: %s\n", trimmed);
	free(trimmed);
	return(0);
}
*/
