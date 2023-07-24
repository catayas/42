/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:59:58 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/10 22:43:58 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	j = ft_strlen(s1);
	i = 0;
	str = NULL;
	if (s1 != 0 && set != 0)
	{
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] != '\0' && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		len = j - i + 1;
		str = (char *)malloc(sizeof(char) * len);
		if (str != NULL)
			ft_strlcpy(str, &s1[i], len);
	}
	return (str);
}
