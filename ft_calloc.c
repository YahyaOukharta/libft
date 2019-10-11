/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:38:33 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 18:19:04 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(unsigned int nitems, unsigned int size)
{
	void *ptr;
	if(!ptr = malloc(nitems * size))
		return (0);
	bzero(ptr,size*nitems);
	return (ptr);
}
