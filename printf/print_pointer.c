/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:28 by mdaryn            #+#    #+#             */
/*   Updated: 2021/12/28 14:55:31 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*str;

	length = ft_strlen(s1);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_rtrn_pointer(unsigned long long ull)
{
	char	*pointer;
	int		count;

	count = 0;
	if (ull == 0)
	{
		count += ft_return_str("0x0");
		return (count);
	}
	count += ft_return_str("0x");
	pointer = ft_ull_base(ull, 16);
	if (!pointer)
		return (0);
	pointer = ft_str_tolower(pointer);
	ft_return_str(pointer);
	count += ft_strlen(pointer);
	free(pointer);
	return (count);
}

char	*ft_make_base(unsigned long long ull_save, int base,
			char *rtn, int count)
{
	while (ull_save != 0)
	{
		if ((ull_save % base) < 10)
			rtn[count - 1] = (ull_save % base) + 48;
		else
			rtn[count - 1] = (ull_save % base) + 55;
		ull_save /= base;
		count--;
	}
	return (rtn);
}

char	*ft_ull_base(unsigned long long ull, int base)
{
	char				*rtn;
	unsigned long long	ull_save;
	int					count;

	rtn = 0;
	count = 0;
	ull_save = ull;
	if (ull == 0)
		return (ft_strdup("0"));
	while (ull != 0)
	{
		ull /= base;
		count++;
	}
	rtn = malloc(sizeof(char) * (count + 1));
	if (!rtn)
		return (0);
	rtn[count] = '\0';
	rtn = ft_make_base(ull_save, base, rtn, count);
	return (rtn);
}
