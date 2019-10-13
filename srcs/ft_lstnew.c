/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:14:05 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/14 00:52:06 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (0);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

int main()
{
	char *str = malloc(sizeof(char)*50);
	ft_strlcpy(str,"hello world!!", 50);
	t_list *e1 =  ft_lstnew((void *)str);
	t_list *e2 = ft_lstnew((void *)str);
	t_list *e3 = ft_lstnew((void *)str + 4);
	t_list *e4 = ft_lstnew((void *)str + 6);
	t_list *e5 = ft_lstnew((void *)str + 8);


	ft_lstadd_back(&e1,e2);
	ft_lstadd_back(&e1,e3);
	ft_lstadd_back(&e1,e4);
	ft_lstadd_back(&e1,e5);
	
	printf("\n\n%d \n",ft_lstsize(e1));
	ft_lstprint(&e1);

	char *s;
	s = (char *)e1->content;	
	ft_lstclear(&e2,free);

	printf("\n\n%d \n",ft_lstsize(e1));
	ft_lstprint(&e1);

}
