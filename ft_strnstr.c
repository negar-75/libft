/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:27:22 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/12 10:24:09 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*substring)
		return ((char *)string);
	i = 0;
	while (i < len && string[i] != '\0')
	{
		j = 0;
		while (string[i + j] == substring[j]
			&& substring[j] != '\0' && i + j < len)
		{
			j++;
			if (substring[j] == '\0')
				return ((char *)&string[i]);
		}
		i++;
	}
	return (NULL);
}
// static void	test_ft_strnstr(const char *string, const char *substring,
// 		size_t len, const char *expected)
// {
// 	char	*result;

// 	printf("Testing ft_strnstr(\"%s\", \"%s\", %zu)\n", string, substring, len);
// 	// Call ft_strnstr
// 	result = ft_strnstr(string, substring, len);
// 	// Check the result
// 	if (!result)
// 	{
// 		if (!expected)
// 			printf("Test passed: Returned NULL as expected\n");
// 		else
// 			printf("Test failed: Returned NULL, expected \"%s\"\n", expected);
// 	}
// 	else
// 	{
// 		if (!expected)
// 			printf("Test failed: Returned \"%s\", expected NULL\n", result);
// 		else if (strcmp(result, expected) == 0)
// 			printf("Test passed: Returned \"%s\" as expected\n", result);
// 		else
// 			printf("Test failed: Returned \"%s\", expected \"%s\"\n", result,
// 				expected);
// 	}
// }

//int	main(void)
//{
	// Test cases
	// test_ft_strnstr("Hello, World!", "World", 12, "World!");
	// test_ft_strnstr("Hello, World!", "Hello", 12, "Hello, World!");
	// test_ft_strnstr("Hello, World!", "o", 12, "o, World!");
	// test_ft_strnstr("Hello, World!", "z", 12, NULL);

	// Test with an empty substring
	// test_ft_strnstr("Hello, World!", "", 12, "Hello, World!");

	// Test with a substring longer than the string
	// test_ft_strnstr("Hello", "Hello, World!", 12, NULL);
	// printf("my ans %s\n",ft_strnstr("fake", ((void *)0), 3));
	// printf("lib ans %s",strnstr("fake", ((void *)0), 3));
	// return (0);
//}