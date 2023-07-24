/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:34:44 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/10 22:50:33 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t b)
{
	size_t	i;

	i = 0;
	while (i < b)
	{
		*(unsigned char *)dest = 0;
		dest++;
		i++;
	}
}
