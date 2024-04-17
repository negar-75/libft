/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:45:40 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/15 15:14:11 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, (del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// static void del_node(void *content)
// {
//  free(content);
// }
// static void* func(void* content)
// {
//   size_t *len = malloc(sizeof(size_t));
//   *len = strlen(( const char *)content);
//   return (len);
// }
// int main() {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = ft_strdup("10");
//     head->next = malloc(sizeof(t_list));
//     head->next->content = ft_strdup("200");
//     head->next->next = malloc(sizeof(t_list));
//     head->next->next->content = ft_strdup("3000");
//     head->next->next->next = NULL;
//     t_list *mapped_list = ft_lstmap(head, func, del_node);
//     t_list *current = mapped_list;
//     while (current != NULL) {
//         if (current -> next == NULL)
//           printf("%zu", *(size_t*)(current->content));
//         else
//           printf("%zu -> ", *(size_t*)(current->content));
//         current = current->next;
//     }
//     ft_lstclear(&head,free);
//     ft_lstclear(&mapped_list,free);
//    return (0);
// }