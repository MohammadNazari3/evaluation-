/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:02:44 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/04 18:31:51 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr;

	ptr = 0;
	while (*str != '\0' )
	{
		if (*str == (char)c)
		{
			ptr = str;
		}
		str++;
	}
	if (*str == (char)c)
		ptr = (char *)str;
	return ((char *)ptr);
}
/*
int main()
{
char str[55] ="This is a string for testing";
char *ptr;
ptr = ft_strrchr (str,'i');
if (ptr != NULL)
{
printf ("Last occurrence of 'i' in '%s' is at position %ld\n",str, ptr - str);
}
else
{
printf("The character 'i' was not found in '%s'\n",str);
 }
return 0;
i
}
*/
