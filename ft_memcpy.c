/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:31:50 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 16:18:59 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*s1;
	const unsigned char		*s2;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (!s1 && !s2)
		return (dest);
	while (n)
	{
		*s1++ = *s2++;
		n--;
	}
	return (dest);
}

// int main ()
// {
//     char src[] = "today is good";
//     char dest[16];
//     printf("%s \n",(char*)(ft_memcpy(dest,src,7)));
//     // printf("%s",(char*)(memcpy(dest,src,15)));
//     return (0);
// }