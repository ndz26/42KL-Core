/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:29:59 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 22:22:42 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>

int main(void)
{
	int fd = open("test", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd('z', fd);
	return (0);
}*/
