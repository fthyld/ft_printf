/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:12:37 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 17:40:21 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lower_hexa(unsigned int hexa)
{
	int		count;
	char	*tmp;

	tmp = ft_itoa_base(hexa, "0123456789abcdef");
	count = ft_print_string(tmp);
	free((void *)tmp);
	return (count);
}
