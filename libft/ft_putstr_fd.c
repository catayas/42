/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:09:34 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/09 01:40:09 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
