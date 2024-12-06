/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 05:39:24 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 22:28:51 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	n = n % 10 + '0';
	write(fd, &n, 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int num = 123;
	int fd = open("hello", O_WRONLY | O_CREAT, 0644);
	ft_putnbr_fd(num, fd);
	close(fd);
	return (0);
}*/
