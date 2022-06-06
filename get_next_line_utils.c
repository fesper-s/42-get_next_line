/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 08:45:40 by fesper-s          #+#    #+#             */
/*   Updated: 2022/06/06 14:10:56 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	find;

	str = (char *) s;
	find = (char) c;
	while (*str != find)
	{
		if (!str)
			return (NULL);
		str++;
	}
	return (str);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned char	*str_src;

	str_src = (unsigned char *) src;
	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (str_src[i] && i < dstsize - 1)
	{
		dst[i] = str_src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen(dst);
	i = 0;
	if (ft_strlen(dst) + 1 < dstsize && dstsize > 0)
	{
		while (src[i] && ft_strlen(dst) + i < dstsize - 1)
		{
			dst[len_dst] = src[i];
			len_dst++;
			i++;
		}
	}
	dst[len_dst] = '\0';
	if (dstsize > ft_strlen(dst))
		return (ft_strlen(dst) + ft_strlen(src));
	return (ft_strlen(src) + dstsize);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (new_str);
}
