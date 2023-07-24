/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:02:38 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/09 01:40:58 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	else
	{
		while (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
