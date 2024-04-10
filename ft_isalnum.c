/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:40:30 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/08 14:40:37 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
// int main()
// {
// 	printf("%d",ft_isalnum('1'));

// 	printf("%d",ft_isalnum('A'));

// 	printf("%d",ft_isalnum(' '));

// 	printf("%d",ft_isalnum('1'));

// 	printf("%d",ft_isalnum('5'));

// 	printf("%d",ft_isalnum('x'));

// 	printf("%d",ft_isalnum('\n'));

// }