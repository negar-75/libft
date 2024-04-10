/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:33:21 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 14:55:30 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (!s1 || !s2 || (s1 == s2))
		return (NULL);
	if (s1 > s2 && s2 + n > s1)
	{
		i = n;
		while (i > 0)
		{
			s1[i - 1] = s2[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(s1, s2, n);
	return (dest);
}

// int	main(void)
// {
// 	char target[21] = "a shiny white sphere";
// 	char *p = target + 8;      // s1
// 	char *source = target + 2; // s2
// 	ft_memmove(p, source, 14);
// 	printf("my mem %s\n", target);
// 	// memmove(p, source, 7);
// 	// printf("original %s\n", target);
// 	return (0);
// }