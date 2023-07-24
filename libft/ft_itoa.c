/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:26:57 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/12 11:40:40 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int n)
{
	unsigned int	nlen;

	nlen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nlen++;
	while (n != 0)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	number;

	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		str[0] = '0';
	str[len] = '\0';
	while (number != 0)
	{
		str[len - 1] = (number % 10) + '0';
		len--;
		number /= 10;
	}
	return (str);
}
