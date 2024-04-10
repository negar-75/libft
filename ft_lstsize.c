/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:43:46 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 09:43:55 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		size;

	if (!lst)
		return (0);
	current = lst;
	size = 0;
	while (1)
	{
		size++;
		if (current->next == NULL)
			break ;
		current = current->next;
	}
	return (size);
}

// int main() {

//    t_list * l =  NULL;
//    printf("%s",ft_lstsize(l) == 0 ? "true" : "false");
//    ft_lstadd_front(&l, ft_lstnew((void*)1));
//    printf("%s",ft_lstsize(l) == 1 ? "true" : "false");
//    ft_lstadd_front(&l, ft_lstnew((void*)2));
//    printf("%s",ft_lstsize(l) == 2 ? "true" : "false");
//    return (0);
// }