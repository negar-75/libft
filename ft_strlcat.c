/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:55:35 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/15 18:27:21 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	des_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	if (!dst && !size)
		return (0);
	des_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= des_len)
		return (src_len + size);
	else
		result = src_len + des_len;
	i = 0;
	while (src[i] && (des_len + i) < size - 1)
	{
		dst[des_len + i] = src[i];
		i++;
	}
	dst[des_len + i] = '\0';
	return (result);
}
// #include<string.h>
// int main ()
// {
//     char dest[30];
//     // size_t result1;

//     memset(dest,0,30);

//     // result1 = ft_strlcat(dest, "123", 4); // Pass size of dest array
//     // printf("%zu\n", result1);
//     // printf("%s\n", dest);
//     size_t result = strlcat(dest, "123", 4); // Pass size of dest array
//     printf("%zu\n", result);
//     printf("%s\n", dest);
//     // printf("%d\n", strcmp(dest, ""));
//     return (0);
// }