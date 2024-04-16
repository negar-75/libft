/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:37:11 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/16 15:22:19 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	head = lst;
	if (head && f)
	{
		while (head)
		{
			f(head->content);
			head = head->next;
		}
	}
}

// void f(void *content) {
//     char *str = (char *)content;
//     strcpy(str, "same");
// }
// int main() {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = ft_strdup("10");
//     head->next = malloc(sizeof(t_list));
//     head->next->content = ft_strdup("20");
//     head->next->next = malloc(sizeof(t_list));
//     head->next->next->content = ft_strdup("30");
//     head->next->next->next = NULL;

//     ft_lstiter(head, f);

//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s -> ", (char*)(current->content));
//         current = current->next;
//     }
//    return (0);
// }