/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:51:35 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/14 22:09:40 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*alst);
	last->next = new;
}
