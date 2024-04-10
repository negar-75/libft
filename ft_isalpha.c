/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:40:52 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 16:03:47 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_upper(int c)
{
	return ('A' <= c && c <= 'Z');
}

static int	ft_lower(int c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_upper(c) || ft_lower(c));
}
