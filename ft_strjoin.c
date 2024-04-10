/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:58:58 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 15:59:03 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	char	*temp;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	temp = (char *)malloc(((len1 + len2 + 1) * sizeof(char)));
	if (!temp)
		return (NULL);
	dest = temp;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (dest);
}

// int main ()
// {
//     const char *s1 = "";
//     const char *s2 = "";
//     char *s3 = ft_strjoin(s1,s2);
//     printf("this is string %s",s3);
//     return (0);
// }