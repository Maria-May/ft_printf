/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:54:29 by mdaryn            #+#    #+#             */
/*   Updated: 2021/12/28 14:54:31 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
		|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int	ft_check_out(va_list args, int c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_return_str(va_arg(args, char *));
	else if (c == 'p')
		count += ft_rtrn_pointer(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunsint((unsigned int)va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_make_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		count += ft_make_hexa(va_arg(args, unsigned int), 0);
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}
