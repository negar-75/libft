/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:58:29 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 15:58:33 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_world_count(char const *s, char c)
{
	static int		world_count;
	unsigned int	i;

	i = 0;
	world_count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			++world_count;
		while (s[i] && s[i] != c)
			i++;
	}
	return (world_count);
}

char	*ft_allocate_word(char const *s, char c)
{
	int		i;
	char	*new_word;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	new_word = (char *)malloc((i + 1) * sizeof(char));
	if (!new_word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		new_word[i] = s[i];
		i++;
	}
	new_word[i] = '\0';
	return (new_word);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		j;
	char	**arr;

	j = 0;
	words = ft_world_count(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			arr[j] = ft_allocate_word(s, c);
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

// int	main(void)
// {
// 	char	str[] = "it is today";
// 	char	c = ' ';
//     char	**spt = ft_split(str, c);
// 	int	i = 0;
// 	while (spt[i] != NULL)
// 	{
//         printf("%s",spt[i]);
//         printf("%c",'\n');
// 		i++;
// 	}
//     return (0);
// }