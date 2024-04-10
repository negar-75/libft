/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:45:20 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 16:04:29 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == c)
		{
			return ((void *)ptr);
		}
		n--;
		ptr++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "this is what I want";
// 	int ch = -1;
// 	char *ret;

// 	ret = ft_memchr(str, ch, strlen(str));

// 	printf("String after |%d| is - |%s|\n", ch, ret);
//     printf("%s",(char *)(memchr(str,ch,strlen(str))));
// }