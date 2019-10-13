/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:49:36 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/13 18:55:44 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int size;
	size = ft_lstsize(lst);
	while(size > 1)
	{
		lst = lst->next;
		size--;
	}
	return (lst);
}
