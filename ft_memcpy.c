/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 00:31:50 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 19:22:08 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = dest;
	s = dest;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
