/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:55:17 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 14:55:21 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}
// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore memset(): %s\n", str);
//     ft_memset(str + 8, '.', 8*sizeof(char));
//     printf("After memset():  %s", str);
// 	return (0);
// }