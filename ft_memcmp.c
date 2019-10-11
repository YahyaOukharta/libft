/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:51:07 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 17:22:42 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *p1, const void *p2, unsigned int n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)p1;
	s2 = (unsigned char *)p2;

	while(n > 0)
	{
		if(*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int main(int argc, char **argv)
{
	char s1[50]; 
	char s2[50];

	strcpy(s1,argv[1]);
	strcpy(s2,argv[2]);

	printf("%d\n",ft_memcmp((void *)s1,(void *)s2,atoi(argv[3])));
	printf("%d\n",memcmp((void *)s1,(void *)s2,atoi(argv[3])));
}






