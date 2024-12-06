/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:11:17 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 22:30:26 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write (fd, "\n", 1);
}
/*#include <fcntl.h>

int	main(void)
{
	char str[] = "taylor swift";
	int fd = open("hello", O_WRONLY | O_CREAT, 0644);
	ft_putendl_fd(str, fd);
	close(fd);
	return (0);
}*/
