/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:12:55 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 14:47:28 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int number)
{
	char	*tmp;
	int		count;

	tmp = ft_itoa(number);
	count = ft_print_string(tmp);
	free((void *)tmp);
	return (count);
}
