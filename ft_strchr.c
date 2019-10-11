/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:32:00 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 23:00:47 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	printf("%s\n",ft_strchr(argv[1],*argv[2]));
	printf("%s\n",strchr(argv[1],*argv[2]));
}*/
