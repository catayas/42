/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:12:23 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/12 15:37:16 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	b;
	size_t	len;

	i = 0;
	a = 0;
	b = 0;
	if (dest == NULL && size == 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0')
		b++;
	if (size <= i)
		return (b + size);
	len = i + b;
	while (src[a] != '\0' && i < size - 1)
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = '\0';
	return (len);
}
