/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 22:19:19 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 14:30:17 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(str);
	i = 0;
	if (!str || !c)
		return ((char *)str + ft_strlen(str));
	while (*str != (char)c)
	{	
		str++;
		i++;
	}
	if (i + 1 > size)
		return (NULL);
	return ((char *)str);
}
