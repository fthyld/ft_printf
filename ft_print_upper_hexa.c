/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:26:37 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 17:57:38 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upper_hexa(unsigned int hexa)
{
	int		count;
	char	*tmp;

	tmp = ft_itoa_base(hexa, "0123456789ABCDEF");
	count = ft_print_string(tmp);
	free((void *)tmp);
	return (count);
}
