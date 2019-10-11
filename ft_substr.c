/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:21:55 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 19:43:07 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(const char *str, unsigned int start, unsigned int len)
{
	char *sub;
	int i;

	sub = (char *)malloc(len + 1);
	if(!sub)
		return (0);
	ft_strlcpy(sub,str+start-1,len);
	return (sub);
}

int main(int argc,char**argv)
{
	printf("%s\n",ft_substr("hello worldddddddddwwwwdd",atoi(argv[1]),atoi(argv[2])));
}
