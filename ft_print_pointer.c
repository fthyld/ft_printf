/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:28:55 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 18:04:55 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int				count;
	char			*tmp;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	tmp = ft_itoa_base(address, "0123456789abcdef");
	count += ft_print_string("0x");
	count += ft_print_string(tmp);
	free((void *)tmp);
	return (count);
}
