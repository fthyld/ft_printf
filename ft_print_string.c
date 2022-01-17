/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:47:21 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 14:58:03 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	if (str == NULL)
	{
		count += ft_print_string("(null)");
		return (count);
	}
	while (str[index])
	{
		count += ft_print_char(str[index]);
		index++;
	}
	return (count);
}
