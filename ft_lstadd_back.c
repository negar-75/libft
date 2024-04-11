/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:31:03 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/08 15:31:13 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

// int main()
// {
//     t_list *new = malloc(sizeof(t_list));
//     new->content = "I want to be added";
//     t_list *head = malloc(sizeof(t_list));
//     head->content = "10";
//     head->next = malloc(sizeof(t_list));
//     head->next->content = "20";
//     head->next->next = malloc(sizeof(t_list));
//     head->next->next->content ="30";
//     head->next->next->next = NULL;
//     ft_lstadd_back(&head,new);
//     printf("%s",(char*)(ft_lstlast(head)->content));
//     while (head)
//     {
//         t_list *temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return (0);
// }