/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:17:32 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/14 23:40:03 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../libft_bonus.h"
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	alst = &new;
}
