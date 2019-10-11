/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:43:24 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 20:12:26 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *str;
	int len1;
	int len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if(!str)
		return (0);
	strlcpy(str,s1,len1 + 1);
	strlcat(str,s2,len1 + len2 + 1);
	return (str);
}

int main(int argc, char **argv)
{
	printf("%s\n",ft_strjoin(argv[1],argv[2]));
}
