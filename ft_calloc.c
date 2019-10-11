/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:38:33 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/12 00:11:11 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(unsigned int nitems, unsigned int size)
{
	void *ptr;

	if (!ptr = malloc(nitems * size))
		return (0);
	ft_bzero(ptr, size * nitems);
	return (ptr);
}
