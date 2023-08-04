/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:49:14 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/15 12:45:31 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*ptr;

	ptr = ((unsigned char *)str);
	while (*ptr)
	{
		if (*ptr == (unsigned char) c)
			return ((char *)ptr);
		ptr++;
	}
	if ((unsigned char)c == *ptr)
		return ((char *)ptr);
	return (NULL);
}
/*
int main(int argc, char *argv[])
{
	char *string = "This is MY string";
	char *first_M = strchr(string,'M');
	char *first_m = ft_strchr(string,'M');
	printf("first_M: %s\n", first_M);
	printf("first_m: %s\n", first_m);
	char *first_Z = strchr(string, 'Z');
	char *first_z = ft_strchr(string,'Z');

			if (first_Z == NULL)
			printf("No 'Z' found!\n");
			printf("No 'Z' fount!\n");
			return(0);
}
*/
