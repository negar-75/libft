/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:59:59 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 16:17:28 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if ((unsigned char)c == '\0')
		return (ptr);
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	printf("my ans %s\n",ft_strchr(s, 0));
// 	printf("lib ans %s",strchr(s, 0));
//     return (0);
// }