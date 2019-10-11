/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:48:54 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 12:54:49 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, char c)
{
	while (*str)
		str++;
	str--;
	while (*str)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (0);
}

int main(int argc, char **argv)
{
		printf("%s\n",ft_strrchr(argv[1],*argv[2]));
		printf("%s\n",strrchr(argv[1],*argv[2]));
}
