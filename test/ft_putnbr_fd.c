/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mnazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:07:45 by Mnazari           #+#    #+#             */
/*   Updated: 2023/04/06 17:15:14 by Mnazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* the purpose of the function to output 
the integer n to the file descriptor fd as 
a sereis of character */

void	ft_putnbr_fd(int n, int fd)
{
	int	p;
	int	last_digit;

	last_digit = n % 10;
	n /= 10;
	if (last_digit < 0 || n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		last_digit = -last_digit;
	}
	if (n != 0)
	{
		p = 1;
		while (p * 10 <= n)
		{
			p *= 10;
		}
		while (p != 0)
		{
			ft_putchar_fd(n / p % 10 + '0', fd);
			p /= 10;
		}
	}
	ft_putchar_fd(last_digit + '0', fd);
}
/*
int main(void)
{
    int num = -12345;  // example input

    ft_putnbr_fd(num, STDOUT_FILENO);  // output the number to stdout

    return 0;
}
*/