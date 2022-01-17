/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:31:20 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/06 15:34:49 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	index;
	void	*tmp;

	tmp = b;
	index = 0;
	while (index < len)
	{
		*(unsigned char *)b++ = c;
		index++;
	}
	b = tmp;
	return (b);
}
