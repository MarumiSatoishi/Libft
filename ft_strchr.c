/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoishimarumi <satoishimarumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:14:22 by satoishimar       #+#    #+#             */
/*   Updated: 2021/11/13 17:52:39 by satoishimar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*first_pos;

	while (*str)
	{
		if (*str == (unsigned char)c)
		{
			first_pos = (char *)str;
			return (first_pos);
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
