/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:33:24 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/08 15:34:21 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next;

	if (!lst || !del)
		return ;
	head = *lst;
	next = NULL;
	while (head)
	{
		next = head->next;
		del(head->content);
		free(head);
		head = next;
	}
	*lst = NULL;
}
// static void del_node(void *content)
// {
//  free(content);
// }
// int main() {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = ft_strdup("10");
//     head->next = malloc(sizeof(t_list));
//     head->next->content = ft_strdup("20");
//     head->next->next = malloc(sizeof(t_list));
//     head->next->next->content = ft_strdup("30");
//     head->next->next->next = NULL;

//     ft_lstclear(&head, del_node);

//     // Print the linked list
//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s -> ", (char*)(current->content));
//         current = current->next;
//     }
//    return (0);
// }