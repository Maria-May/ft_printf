/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 14:45:05 by mdaryn            #+#    #+#             */
/*   Updated: 2021/12/25 14:45:14 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		counter;
	va_list	args;
	int		i;

	counter = 0;
	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			if (ft_check_type(input[i + 1]))
			{
				counter += ft_check_out(args, input[i + 1]);
				i++;
			}
		}
		else
			counter += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (counter);
}
