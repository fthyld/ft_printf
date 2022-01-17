/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:54:19 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 17:40:38 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_print_char(int c);
int	ft_print_decimal(int number);
int	ft_print_string(char *str);
int	ft_print_lower_hexa(unsigned int hexa);
int	ft_print_upper_hexa(unsigned int hexa);
int	ft_print_pointer(void *ptr);
int	ft_print_unsgnd_int(unsigned int num);

#endif
