/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:01:55 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 23:54:20 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int bufsize)
{
	int i;

	i = 0;
	if (bufsize > 0)
	{
		while (src[i] && i < bufsize - 1)
		{
			*dst = src[i];
			i++;
			dst++;
		}
		*dst = '\0';
	}
	return (strlen(src));
}
