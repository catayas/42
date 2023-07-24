/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaytas <tcaytas@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:09:20 by tcaytas           #+#    #+#             */
/*   Updated: 2023/07/16 19:09:58 by tcaytas          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numstr(char const *s1, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			len++;
		}
		s1++;
	}
	return (len);
}

static int	ft_numchar(char const *s2, char c, int i)
{
	int	len;

	len = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_freee(char **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char	**ft_fill(char const *s, char **dst, char c, int a)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < a)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * ft_numchar(s, c, i) + 1);
		if (dst[j] == NULL)
			return (ft_freee(dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		a;

	if (s == NULL)
		return (NULL);
	a = ft_numstr(s, c);
	dst = (char **)malloc(sizeof(char *) * (a + 1));
	if (dst == NULL)
		return (NULL);
	return (ft_fill(s, dst, c, a));
}
