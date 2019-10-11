/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:36:24 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 16:22:42 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ********** **************************************************************** */

void	*ft_memchr(const void *ptr, int c, unsigned int n)
{
	unsigned char *p = ptr;
	int i = 0;
	while (p[i] && i < n)
	{
		if (p[i] == c)
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}

int main()
{

	printf("%s",(char *)ft_memchr("hello world",'r',4));
}
