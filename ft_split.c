/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:05:29 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 13:40:23 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_words(const char *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 1;
	while(s[i])
	{
		if(s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int		get_word_len(char *str,unsigned int index, char delim)
{
	int len;
	int i;

	len = 0;
	i = index;
	while(str[i] && str[i] != delim)
	{	
		i++;
		len++;
	}
	return (len);
}

char    **ft_split(const char *str,char c)
{
	char    **tab;
	int     num_words;
	int     word_len;
	int i;
	int j;
	int k;

	num_words = count_words(str,c);
	tab = (char **)malloc(sizeof(char *) * (num_words + 1));
	if(!tab)
		return (0);
	i = 0;
	j = 0;
	while(i < num_words)
	{
		if(str[j] == ',')
			word_len = 0;
		else
			word_len = get_word_len(str,j,c);
		tab[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		ft_memcpy((void*)tab[i],&str[j],word_len);
		tab[i][word_len] = '\0';
		j += word_len + 1;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

void	print_tab(char **tab)
{
	while(*tab)
	{
		printf("%s\n",*tab);
		tab++;
	}
}

int main(int argc, char **argv)
{
	printf("%d\n----------\n", count_words(argv[1],','));
	print_tab(ft_split(argv[1],','));
}
