/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:14:36 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 16:18:06 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ptr;
	unsigned int	len;

	ptr = NULL;
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	if (c > 256)
		return ((char *)s);
	while (len > 0)
	{
		if (s[len - 1] == c)
		{
			ptr = (char *)&s[len - 1];
			break ;
		}
		len--;
	}
	return (ptr);
}

// static void	test_ft_strrchr(const char *s, int c, const char *expected)
// {
// 	char	*result;

// 	printf("Testing ft_strrchr(\"%s\", '%c')\n", s, c);

// 	// Call ft_strrchr
// 	result = ft_strrchr(s, c);

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
//				expected);
// 	}
// }

// int	main(void)
// {
// 	// Test cases
// 	test_ft_strrchr("Hello, World!", 'o', "orld!");
// 	test_ft_strrchr("Hello, World!", 'H', "Hello, World!");
// 	test_ft_strrchr("Hello, World!", '!', "!");
// 	test_ft_strrchr("Hello, World!", 'z', NULL);

// 	// Test with an empty string
// 	test_ft_strrchr("", 'a', NULL);

// 	return (0);
// }