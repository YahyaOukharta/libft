/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:24:15 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 17:37:27 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *src)
{
	int len;
	char *dest;

	len = strlen(src);
	if(!dest = malloc(len + 1))
		return (0);
	strlcpy(dest,s,len);
	return (dest);

}
