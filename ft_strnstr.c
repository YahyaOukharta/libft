/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:34:55 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 15:36:33 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	if (!*s2)
		return (s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n)
		{
			if (!s2[j + 1])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	printf("%s\n",ft_strnstr(argv[1],argv[2],atoi(argv[3])));
	printf("%s\n",strnstr(argv[1],argv[2],atoi(argv[3])));
}
