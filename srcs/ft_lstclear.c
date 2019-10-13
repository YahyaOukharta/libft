/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:16:21 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/14 00:39:01 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list 	*elem;
	t_list	*next;
	elem = *lst;
	
	while(elem != NULL)
	{
		next = elem->next;
		ft_lstdelone(elem, del);
		elem = next;		
	}
}
