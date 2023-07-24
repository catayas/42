/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:15:19 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/09 01:36:54 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	void			*ptr;
	unsigned char	*bptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		bptr = (unsigned char *)ptr;
		while (i < count * size)
		{
			bptr[i] = 0;
			i++;
		}
	}
	else
		return (NULL);
	return (ptr);
}
