/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:16 by mdaryn            #+#    #+#             */
/*   Updated: 2021/12/28 14:55:21 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_len(int num)
{
	int	a;
	int	len;

	len = 1;
	a = num;
	while (a / 10 > 0)
	{
		len *= 10;
		a /= 10;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	num_len;
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
		count += 2;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		count++;
	}
	num_len = ft_count_len(n);
	while (num_len)
	{
		ft_putchar(((n / num_len) + '0'));
		n %= num_len;
		num_len /= 10;
		count++;
	}
	return (count);
}

int	ft_count_unsin_len(unsigned int num)
{
	unsigned int	a;
	int				len;

	len = 1;
	a = num;
	while (a / 10 > 0)
	{
		len++;
		a /= 10;
	}
	return (len);
}

int	ft_putunsint(unsigned int unsint)
{
	int	counter;

	counter = ft_count_unsin_len(unsint);
	if (unsint > 9)
	{
		ft_putunsint(unsint / 10);
		ft_putunsint(unsint % 10);
	}
	else
		ft_putchar(unsint + '0');
	return (counter);
}
