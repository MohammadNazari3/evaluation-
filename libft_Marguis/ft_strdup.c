/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:03:38 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/15 09:24:01 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*buffer;
	int		i;

	len = 0;
	while (s1[len])
		++len;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
int main(void)
{
	const char *str = "Hello, world!";
	char *copy = ft_strdup(str);
	if (copy == NULL)
	{
		printf("Error:unable to allocate memory for copy.\n");
		return 1;
	}
	printf("Original string: %s\n", str);
	printf("Copy string : %s\n", copy);
	free(copy);
	return(0);
}
*/
