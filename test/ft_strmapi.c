/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:38:39 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/06 16:48:49 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) +1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 
char	f(unsigned int index, char c)
{
	return (c + index);
}
int main()
{
    char input_string[] = "abcde";

    char *output_string = ft_strmapi(input_string, &f);
    if (output_string == NULL)
    {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    printf("Input string: %s\n", input_string);
    printf("Output string: %s\n", output_string);
    free(output_string);

    return 0;
}
*/