/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:04:29 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 19:30:00 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, void *src, int c, unsigned int n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	d = dest;
	s = src;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return ((void*)(&d[i + 1]));
		i++;
	}
	return (0);
}
