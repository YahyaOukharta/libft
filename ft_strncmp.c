/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:55:01 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 13:34:47 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	if (n < 1)
		return (0);
	i = 1;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

int main(int argc, char **argv)
{
	printf("%d\n",ft_strncmp(argv[1],argv[2],atoi(argv[3])));
	printf("%d\n",strncmp(argv[1],argv[2],atoi(argv[3])));
}
