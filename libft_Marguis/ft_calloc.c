/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:12:04 by mmeyn             #+#    #+#             */
/*   Updated: 2023/03/30 17:50:59 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc (count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
/*
int main (void)
{
	int n = 5;
	int* ptr;

	//Allocate memory for n integers
	ptr = (int*)ft_calloc(n, sizeof(int));

	if (ptr == NULL)
	{
		printf("Memory allocation failed. \n");
		exit(1);
	}

	//Intialize the array
	for (int i = 0; i < n; i++)
	{
		ptr[i] = i + 1;
	}

	//Print the array
	printf ("Array elements :");
	for (int i = 0; i < n; i++)
	{
		printf("%d", ptr[i]);
	}
	printf ("\n");

	//Free the allocated memory
	free (ptr);
	return (0);
}
*/
