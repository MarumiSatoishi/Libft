/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoishimarumi <satoishimarumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:14:36 by satoishimar       #+#    #+#             */
/*   Updated: 2021/11/13 17:55:20 by satoishimar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*last_pos;

	len = ft_strlen(str);
	if (c == '\0')
		return ((char *)&str[len]);
	while (len >= 0)
	{
		if (str[len] == (unsigned char)c)
		{
			last_pos = (char *)&str[len];
			return (last_pos);
		}
		len--;
	}
	return (NULL);
}
