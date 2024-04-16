/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:54:52 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/16 15:03:00 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long int nbr)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		i++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static char	*ft_zero(char *arr)
{
	arr[0] = '0';
	return (arr);
}

char	*ft_itoa(int nbr)
{
	long int	num;
	int			len;
	char		*arr;

	num = nbr;
	len = num_len(num);
	arr = malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	if (num == 0)
		return (ft_zero(arr));
	if (num < 0)
	{
		arr[0] = '-';
		num = -(num);
	}
	while (num > 0)
	{
		arr[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (arr);
}
// static void	test_ft_itoa(int nbr, const char *expected)
// {
// 	char *result = ft_itoa(nbr);

// 	printf("Testing ft_itoa(%d)\n", nbr);

// 	if (strcmp(result, expected) == 0)
// 		printf("Test passed: Returned \"%s\" as
//      expected\n", result);
// 	else
// 		printf("Test failed: Returned \"%s\",
//       expected \"%s\"\n", result, expected);

// 	free(result);
// }

// int	main(void)
// {
// 	// printf("1. Test with positive numbers:\n");
// 	// test_ft_itoa(12345, "12345");
// 	// test_ft_itoa(987654321, "987654321");
// 	// printf("\n2. Test with negative numbers:\n");
// 	// test_ft_itoa(-12345, "-12345");
// 	// test_ft_itoa(-987654321, "-987654321");

// 	// printf("\n3. Test with zero:\n");
// 	// test_ft_itoa(0, "0");
// 	// printf("\n4. Test with INT_MAX and INT_MIN values:\n");
// 	// test_ft_itoa(INT_MAX, "2147483647");
// 	// test_ft_itoa(INT_MIN, "-2147483648");
// 	return (0);
// }