/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:44 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 19:42:18 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void* src, unsigned int count)
{
	unsigned char *d;
	unsigned char *s;
	
	d = dest;
	s = (unsigned char *)src;
	if (d - s < count)
	{
		while (count > 0)
		{
			d[count] = s[count];
			count--;
		}
		return (dest);
	}
	return ft_memcpy(dest, src, count);
}

int main()
{
	char str[50] = "abcdefgh";
	printf("%s",ft_memmove(str+4,str,2));
}
