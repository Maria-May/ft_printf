/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 14:45:33 by mdaryn            #+#    #+#             */
/*   Updated: 2021/12/28 14:54:12 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_check_type(int c);
int		ft_check_out(va_list args, int c);
int		ft_putchar(int c);
int		ft_return_str(char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		ft_rtrn_pointer(unsigned long long ull);
char	*ft_make_base(unsigned long long ull_save, int base,
			char *rtn, int count);
char	*ft_ull_base(unsigned long long ull, int base);
int		ft_count_len(int num);
int		ft_putnbr(int n);
int		ft_tolower(int c);
char	*ft_str_tolower(char *str);
int		ft_make_hexa(unsigned int ull, int flag);
int		ft_putunsint(unsigned int unsint);
int		ft_count_unsin_len(unsigned int num);
#endif
