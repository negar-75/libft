/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:54:54 by nnasiri           #+#    #+#             */
/*   Updated: 2024/04/09 14:54:57 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main ()
// {
//   int fd = open("tripouille", O_RDWR | O_CREAT);
// 	ft_putendl_fd((char*)"42", fd);
//   char s[10] = {0}; read(fd, s, 4);
//   printf("%s",strcmp(s, "42\n") == 0 ? "true" : "false");
//   return (0);
// }