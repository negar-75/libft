/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:59:32 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/12 10:38:03 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s && !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

// void	f(unsigned int index, char *str)
// {
// 	if (index % 2 == 0)
// 		*str = *str + 1;
// 	else
// 		*str = *str;
// }
// int main()
// {
// 	char str1[] = "abc";
// 	ft_striteri(str1, *f);
// 	printf("%s\n", str1);
//     return (0);
// }