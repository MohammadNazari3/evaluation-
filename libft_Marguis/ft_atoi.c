/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeyn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:50:09 by mmeyn             #+#    #+#             */
/*   Updated: 2023/04/30 10:33:14 by mmeyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	m;
	int	n;
	int	i;

	m = 1;
	n = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'\
		|| str[i] == '\r' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m = m * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * m);
}
/*
int main(void)
{
	const char *str = "42";
	int value = ft_atoi(str);
	printf ("The string is '%s' converted to an integer is %d.\n", str, value);
   return(0);
} 
*/
