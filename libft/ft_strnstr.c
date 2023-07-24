/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:36:13 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/16 16:30:52 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	size;

	i = 0;
	size = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (needle[size] != '\0')
		size++;
	while (haystack[i] != '\0' && i < len)
	{
		a = 0;
		if (haystack[i] == needle[a])
		{
			while ((haystack[i + a] == needle[a]) && a < size && a + i < len)
				a++;
			if (a == size)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
