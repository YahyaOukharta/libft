/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:03:05 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/12 00:04:37 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int c, unsigned int n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char)ptr;
	while (p[i] && i < n)
	{
		if (p[i] == c)
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}
