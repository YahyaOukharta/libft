/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:03:38 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/14 21:55:40 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*new;
	t_list	*head;

	if (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			return (0);
		head = new;
		while (lst)
		{
			lst = lst->next;
			if (!lst)
				break ;
			new->next = ft_lstnew(f(lst->content));
			new = new->next;
		}
		return (head);
	}
	else
		return (0);
}