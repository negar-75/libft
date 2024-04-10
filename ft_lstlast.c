/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:44:24 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/08 15:44:46 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (1)
	{
		if (current->next == NULL)
			return (current);
		current = current->next;
	}
}

// int main() {

//     t_list *head = malloc(sizeof(t_list));
//     head->content = "1";
//     head->next = malloc(sizeof(t_list));
//     head->next->content = "2";
//     head->next->next = malloc(sizeof(t_list));
//     head->next->next->content = "3";
//     head->next->next->next = malloc(sizeof(t_list));
//     head->next->next->next->content = "4";
//     head->next->next->next->next = malloc(sizeof(t_list));
//     head->next->next->next->next->content = "5";
//     printf("%s",(char*)(ft_lstlast(head)->content));
//     return (0);
// }