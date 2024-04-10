/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:32:05 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/08 15:32:50 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main ()
// {
// 	char* first = "fisrt";
// 	char* second = "second";
// 	t_list *fi = ft_lstnew(first);
// 	t_list *se = ft_lstnew(second);
//     ft_lstadd_front(&fi,se);
// 	return (0);
// }