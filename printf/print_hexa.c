/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:05 by mdaryn            #+#    #+#             */
/*   Updated: 2021/12/28 14:55:09 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_make_hexa(unsigned int ull, int flag)
{
	int		char_count;
	char	*hexa_str;

	char_count = 0;
	if (flag == 1)
	{
		hexa_str = ft_ull_base(ull, 16);
		if (!hexa_str)
			return (0);
		hexa_str = ft_str_tolower(hexa_str);
		ft_return_str(hexa_str);
		char_count += ft_strlen(hexa_str);
		free (hexa_str);
	}
	else if (flag == 0)
	{
		hexa_str = ft_ull_base(ull, 16);
		if (!hexa_str)
			return (0);
		ft_return_str(hexa_str);
		char_count += ft_strlen(hexa_str);
		free (hexa_str);
	}
	return (char_count);
}
