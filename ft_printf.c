/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyildiri <fyildiri@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:56:54 by fyildiri          #+#    #+#             */
/*   Updated: 2022/01/13 20:59:10 by fyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_format(char c)
{
	return (c == 'd' || c == 'p' || c == 'u' || c == 's' || c == 'i' \
			|| c == 'c' || c == 'x' || c == 'X' || c == '%');
}

static int	ft_format(char c, va_list argument)
{
	if (c == 'd' || c == 'i')
		return (ft_print_decimal(va_arg(argument, int)));
	else if (c == 's')
		return (ft_print_string(va_arg(argument, char *)));
	else if (c == 'u')
		return (ft_print_unsgnd_int(va_arg(argument, unsigned long)));
	else if (c == 'c')
		return (ft_print_char(va_arg(argument, int)));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(argument, void *)));
	else if (c == 'x')
		return (ft_print_lower_hexa(va_arg(argument, unsigned long)));
	else if (c == 'X')
		return (ft_print_upper_hexa(va_arg(argument, unsigned long)));
	else
		return (ft_print_char('%'));
}

static int	ft_separate_input(char const *input, va_list arguments)
{
	int	char_count;
	int	i;

	char_count = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			while (input[i] && !ft_is_format(input[i]) && input[i] != ' ')
				i++;
			if (ft_is_format(input[i]))
			{
				char_count += ft_format(input[i], arguments);
				i++;
			}
		}
		else
		{
			char_count += ft_print_char(input[i]);
			i++;
		}
	}
	return (char_count);
}

int	ft_printf(const char *input, ...)
{
	int			char_count;
	va_list		arguments;
	const char	*input_copy;

	input_copy = ft_strdup(input);
	if (!input_copy)
		return (0);
	char_count = 0;
	va_start(arguments, input);
	char_count = ft_separate_input(input, arguments);
	va_end(arguments);
	free((void *)input_copy);
	return (char_count);
}
