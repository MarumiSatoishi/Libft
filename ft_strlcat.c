/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoishimarumi <satoishimarumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:14:28 by satoishimar       #+#    #+#             */
/*   Updated: 2021/11/13 17:53:39 by satoishimar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	j = dest_size;
	i = 0;
	if (dest_size < size - 1 && size > 0)
	{
		while (src[i] && dest_size + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dest_size >= size)
		dest_size = size;
	return (dest_size + src_size);
}
