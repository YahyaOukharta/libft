/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:01:55 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 19:40:19 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
unsigned int	ft_strlcpy(char *dst, char* src, unsigned int bufsize)
{
	int i;

	i = 0;
	if (bufsize > 0){
		while (src[i] && i < bufsize - 1)
		{
			*dst = src[i];
			i++;
			dst++;;
		}
		*dst = '\0';
	}
	return (strlen(src));
}
/*
int main(int argc, char **argv)
{
	char *dst1 = malloc(sizeof(char) *3);
	char *dst2 = malloc(sizeof(char) *3);
	printf("%d\n",ft_strlcpy(dst1,"hello",atoi(argv[1])));
	printf("%d\n",strlcpy(dst2,"hello",atoi(argv[1])));
	
	printf("%s\n",dst1);
	printf("%s\n",dst2);
}*/
