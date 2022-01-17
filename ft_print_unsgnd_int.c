/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsgnd_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:47:06 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 15:19:29 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsgnd_int(unsigned int num)
{
	int		count;
	char	*tmp;

	if ((int)num < 0)
		tmp = ft_itoa(4294967295 + num + 1);
	else
		tmp = ft_itoa(num);
	count = ft_print_string(tmp);
	free((void *)tmp);
	return (count);
}
