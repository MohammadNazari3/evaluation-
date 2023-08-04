/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:05:13 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/30 10:29:22 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		len = 0;
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && s[start])
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
int main()
{
	char const	sub[] = "!!!!!!";
	char const	s[] = "HelloHelloHello";
	char		*str;

	str = ft_substr("", 0, 5);
	printf("%s\n\n", str);
}*/
