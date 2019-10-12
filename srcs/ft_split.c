/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:05:29 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/12 21:38:08 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	count_words(const char *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static int	get_word_len(const char *str, unsigned int index, char delim)
{
	int len;
	int i;

	len = 0;
	i = index;
	while (str[i] && str[i] != delim)
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_split(const char *str, char c)
{
	char	**tab;
	int		num_words;
	int		word_len;
	int		i;
	int		j;

	num_words = count_words(str, c);
	tab = (char **)malloc(sizeof(const char *) * (num_words + 1));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (i < num_words)
	{
		while (str[j] == c)
			j++;
		word_len = get_word_len(str, j, c);
		tab[i] = ft_substr(str, j, word_len);
		j += word_len;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
