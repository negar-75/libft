/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:33:47 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/15 15:12:03 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_str(void)
{
	char	*sub;

	sub = (char *)malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (empty_str());
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (s + (start)), len + 1);
	return (sub);
}

// int	main(void)
// {
//   char* temp;
//   temp = ft_substr("tripouille", 13,12);
//   printf("%s",temp);
//   free(temp);
//   return (0);
// }