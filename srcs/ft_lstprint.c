/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:47:02 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/15 00:34:33 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../libft_bonus.h"

void	ft_lstprint(t_list **lst)
{
	t_list *e;

	e = *lst;
	while (e != NULL)
	{
		printf("----------------\n");
		printf("\033[1;35m");/* set color */
		printf(" %p :\n", e);
		printf("\033[0m");/* reset to default */
		printf("\033[1;31m \tContent \033[0m : %s \( %p )\n",e->content,e->content);
		printf("\033[1;32m \tNext \033[0m    :\033[1;35m %p \033[0m \n",e->next);
		printf("----------------\n");
		e = e->next;
	}
}
