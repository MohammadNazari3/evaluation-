/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:23:00 by suprajap          #+#    #+#             */
/*   Updated: 2023/07/18 17:45:49 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				print_string(char *str);
int				print_int(long n);
unsigned int	print_unsigned(unsigned int n);
int				print_pointer(const void *ptr);
int				print_hex(unsigned long n, int checkcase);
int				print_hex32(unsigned int n, int checkcase);
int				print_char(char c);
int				ft_printf(const char *str, ...);

#endif
