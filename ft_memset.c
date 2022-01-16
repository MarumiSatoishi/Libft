/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoishimarumi <satoishimarumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:14:13 by satoishimar       #+#    #+#             */
/*   Updated: 2021/11/07 23:14:14 by satoishimar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)buf;
	while (n > 0)
	{
		*str = (unsigned char)ch;
		str++;
		n--;
	}
	return (buf);
}
