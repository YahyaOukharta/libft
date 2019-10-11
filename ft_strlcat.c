/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:07:15 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 19:56:25 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
unsigned int	ft_strlcat(char *dst, char* src, unsigned int bufsize)
{
	int i;
	int j;

	int dstlen = strlen(dst);

	if (dstlen < bufsize )
	{
		i = 0;
		while (src[i] && i < bufsize - dstlen - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + strlen(src));
	}	
	return (dstlen + bufsize );
}
/*
int main(int argc, char **argv)
{
	char *dst1 = malloc(sizeof(char) *4);
	char *dst2 = malloc(sizeof(char) *4);
	strcpy(dst1,"hello");
	strcpy(dst2,"hello");

	printf("%d\n",ft_strlcat(dst1,"worldddddd",atoi(argv[1])));
	printf("%d\n",strlcat(dst2,"worldddddd",atoi(argv[1])));

	printf("%s\n",dst1);
	printf("%s\n",dst2);
}*/
