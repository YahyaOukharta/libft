/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:44 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/12 00:41:16 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int count)
{
	unsigned char *d;
	unsigned char *s;

	d = dest;
	s = (unsigned char *)src;
	if (d < s + count)
	{
		while (count > 0)
		{
			d[count] = s[count];
			count--;
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, count));
}

int main()
{
	char s1[50] = "1234567890";
	char s2[50] = "1234567890";
	
	printf("%s\n",ft_memmove(s1+2,s1,5));
	printf("%s\n",memmove(s2+2,s2,5));
}
