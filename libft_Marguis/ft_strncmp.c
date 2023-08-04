/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:10:39 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/04 19:02:04 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
	}
}
/*
int main()i
{
	const char s1[] = "1234";
	const char s2[] = "1234";
	size_t n;

	n = 2;
	printf("Result:%d", ft_strncmp(s1,s2,n));
	printf("Result:%d", strncmp(s1,s2,n));
	return(0);
}
*/
