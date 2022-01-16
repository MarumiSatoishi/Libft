/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoishimarumi <satoishimarumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:14:20 by satoishimar       #+#    #+#             */
/*   Updated: 2021/11/13 17:52:25 by satoishimar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_split(char compare, char *split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (compare == split[i])
			return (1);
		i++;
	}
	if (!compare)
		return (1);
	return (0);
}

int	count_str(char const *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (is_split(str[i + 1], charset) == 1
			&& is_split(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

void	write_str(char *dest, char const *str_word, char *charset)
{
	int	i;

	i = 0;
	while (is_split(str_word[i], charset) == 0)
	{
		dest[i] = str_word[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char const *str, char *charset)
{
	int		i;
	int		j;
	int		count_split;

	count_split = 0;
	i = 0;
	while (str[i])
	{
		if (is_split(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_split (str[i + j], charset) == 0)
				j++;
			split[count_split] = (char *)malloc(sizeof(char) * (j + 1));
			write_str(split[count_split], str + i, charset);
			i += j;
			count_split++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**response;
	int		strings;

	strings = count_str (s, &c);
	response = (char **)malloc(sizeof(char *) * (strings + 1));
	response[strings] = 0;
	write_split(response, s, &c);
	return (response);
}
