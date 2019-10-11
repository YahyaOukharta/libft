/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:34:55 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 23:51:42 by youkhart         ###   ########.fr       */
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