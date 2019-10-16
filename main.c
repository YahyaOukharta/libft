#include "libft.h"
#include "libft_bonus.h"
void *add_five(void *content)
{
	char *c = (char *)content;
	while(*c)
	{
		*c = ft_toupper(*c);
		c++;
	}
	return (content);
}

int main()
{
	char *str = (char *)malloc(sizeof(char)*50);
	ft_strlcpy(str,"abcdeffdhfdhldslkfht", 50);
	t_list *e1 =  ft_lstnew((void *)str);
	t_list *e2 = ft_lstnew((void *)str + 2);
	t_list *e3 = ft_lstnew((void *)str + 4);
	t_list *e4 = ft_lstnew((void *)str + 6);
	t_list *e5 = ft_lstnew((void *)str + 8);


	ft_lstadd_back(&e1,e2);
	ft_lstadd_back(&e1,e3);
	ft_lstadd_back(&e1,e4);
	ft_lstadd_back(&e1,e5);
	
	printf("\n\n%d \n",ft_lstsize(e1));
	printf("\n\n%p \n",str);
	ft_lstprint(&e1);

	//ft_lstiter(e1,add_five);

	//printf("\n\n%d \n",ft_lstsize(e1));
	printf("\n\n\n");
	t_list *newlist = ft_lstmap(e3,add_five);
	ft_lstprint(&newlist);
}
