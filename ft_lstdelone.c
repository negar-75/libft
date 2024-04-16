/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:34:39 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/16 15:26:38 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !lst->content || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

// void del(void *content)
// {
//  free(content);
// }

// int main()
// {
//    t_list * l =  ft_lstnew(malloc(1));
//    ft_lstdelone(l, free); l = 0;
//    return (0);
// }