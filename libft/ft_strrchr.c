/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:57:03 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 14:30:30 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*p;

	index = 0;
	p = NULL;
	while (1)
	{
		if (s[index] == (char)c)
			p = (char *)(s + index);
		if (s[index] == '\0')
			break ;
		index++;
	}
	return (p);
}
