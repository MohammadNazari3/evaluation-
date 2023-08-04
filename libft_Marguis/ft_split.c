/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 09:11:47 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/15 12:44:10 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	*t_strndup(char const *s, size_t len)
{
	char	*dest;
	size_t	i;

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (k + 1));
	if (!split || !s)
		return (0);
	i = 0;
	j = 0;
	while (j < k)
	{
		while (s[i] == c)
			i++;
		s = &s[i];
		i = 0;
		while (s[i] != c && s[i])
			i++;
		split[j++] = t_strndup(s, i);
	}	
	split[j] = NULL;
	return (split);
}
