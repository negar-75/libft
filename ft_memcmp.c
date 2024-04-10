/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:31:09 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 10:31:19 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	if (n == 0)
		return (0);
	i = 0;
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	printf("%d",ft_memcmp(s, sCpy, 4));
//     return (0);
// }