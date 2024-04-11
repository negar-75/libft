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
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
		d[n] = s[n];
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