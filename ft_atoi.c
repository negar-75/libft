/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:38:13 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 14:57:20 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	b;
	int	c;

	i = 0;
	b = 1;
	c = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\n')
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			b *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		++i;
	}
	return (c * b);
}
// static void	test_ft_atoi(const char *s)
// {
// 	int result_ft_atoi = ft_atoi(s);
// 	int result_atoi = atoi(s);

// 	printf("Testing ft_atoi(\"%s\")\n", s);

// 	if (result_ft_atoi == result_atoi)
// 		printf("Test passed: ft_atoi returned \"%d\" as , 
//      atoi returned \"%d\"\n", result_ft_atoi, result_atoi);
// 	else
// 		printf("Test failed: ft_atoi returned \"%d\", 
//      atoi returned \"%d\"\n", result_ft_atoi, result_atoi);
// }

// int	main(void)
// {
// 	printf("1. Test with positive numbers:\n");
// 	test_ft_atoi("12345");
// 	test_ft_atoi("987654321");
// 	printf("\n2. Test with negative numbers:\n");
// 	test_ft_atoi("-12345");
// 	test_ft_atoi("-987654321");
// 	printf("\n3. Test with leading whitespaces:\n");
// 	test_ft_atoi("    12345");
// 	test_ft_atoi("\t\t\t67890");
// 	printf("\n4. Test with trailing whitespaces:\n");
// 	test_ft_atoi("12345    ");
// 	test_ft_atoi("67890\t\t\t");
// 	printf("\n5. Test with '+' sign:\n");
// 	test_ft_atoi("+12345");
// 	test_ft_atoi("+67890");
// 	printf("\n6. Test with '-' sign:\n");
// 	test_ft_atoi("-12345");
// 	test_ft_atoi("-67890");
// 	printf("\n7. Test with invalid characters before a number:\n");
// 	test_ft_atoi("abc12345");  // atoi returns 0 for this case
// 	test_ft_atoi("   xyz67890");
// 	printf("\n8. Test with invalid characters after a number:\n");
// 	test_ft_atoi("12345abc");  // atoi stops at the first invalid character
// 	test_ft_atoi("67890   xyz");
// 	printf("\n9. Test with empty string:\n");
// 	test_ft_atoi("");  // atoi returns 0 for this case
// 	printf("\n10. Test with INT_MAX and INT_MIN values:\n");
// 	test_ft_atoi("2147483647");  // INT_MAX
// 	test_ft_atoi("-2147483648"); // INT_MIN
// 	return (0);
// }