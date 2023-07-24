/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:34:43 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/24 15:54:30 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(const char c, va_list args)
{
	if (c == 'c')
	{
		
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;
	int		i;

	printed = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			printed += ft_formats(format[i + 1], args);
		}
		else
		{
			printed += ft_printchr(format[i]);
		}
		i++;
	}
	va_end(args);
	return (printed);
}
