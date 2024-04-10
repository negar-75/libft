/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:38:46 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/08 14:39:04 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n != 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
// int main ()
// {
//     char test[] = "this is test";
//     printf("%s\n",test);
//     ft_bzero(test,12);
//     printf("%s",test);
//     return (0);
// }