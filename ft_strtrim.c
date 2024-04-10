/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:48 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 15:57:23 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_exist(char c, char const *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_exist(s1[start], set))
		start++;
	while (s1[end] && is_exist(s1[end], set))
		end--;
	trimmed = ft_substr(s1, (start), (end - start + 1));
	return (trimmed);
}

// int	main(void)
// {
// 	char	str[] = "Where's Wally";
// 	char	str1[] = "Wally";
// 	// ft_putendl_fd(ft_strtrim(str, str1), 1);
//     printf("%s %s",ft_strtrim(str, str1),"this is text");
//     return (0);
// }