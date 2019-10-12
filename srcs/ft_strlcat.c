/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:07:15 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 23:58:43 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int bufsize)
{
	unsigned int	i;
	unsigned int	dstlen;

	dstlen = ft_strlen(dst);
	if (dstlen < bufsize)
	{
		i = 0;
		while (src[i] && i < bufsize - dstlen - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + ft_strlen(src));
	}
	return (dstlen + bufsize);
}
