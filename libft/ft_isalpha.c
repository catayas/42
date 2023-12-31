/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:37:14 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/09 01:37:24 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
