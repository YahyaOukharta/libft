/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:47:02 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/14 00:37:02 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint(t_list	**lst)
{
	t_list *elem;

	elem = *lst;
	while(elem != NULL)
	{
		printf("----------------\n");
		printf("\033[1;35m");	/* set color */
		printf(" %p :\n",elem);
		printf("\033[0m");	/* reset to default */
		printf("\033[1;31m \tContent \033[0m : %s\n",elem->content);
		printf("\033[1;32m \tNext \033[0m    :\033[1;35m %p \033[0m \n",elem->next);
		printf("----------------\n");
		elem = elem->next;
	}
}
