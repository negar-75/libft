/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:52:33 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 15:54:27 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_cpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char				*dest_arr;
	unsigned int		len;

	len = ft_strlen(src);
	dest_arr = (char *)malloc((len + 1) * sizeof(char));
	if (!dest_arr)
		return (NULL);
	return (str_cpy(dest_arr, src));
}
