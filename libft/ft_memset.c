/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:01:13 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/10 22:32:52 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int v, size_t b)
{
	size_t	i;

	i = 0;
	while (i < b)
	{
		*(unsigned char *)(dest + i) = (unsigned char)v;
		i++;
	}
	return (dest);
}
