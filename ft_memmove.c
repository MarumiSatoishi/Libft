/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoishimarumi <satoishimarumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:14:11 by satoishimar       #+#    #+#             */
/*   Updated: 2021/11/13 17:50:47 by satoishimar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*str;
	const char	*str2;
	int			i;

	str = (char *)dst;
	str2 = (char *)src;
	if (str > str2)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			str[i] = str2[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			str[i] = str2[i];
			i++;
		}
	}
	return (dst);
}
