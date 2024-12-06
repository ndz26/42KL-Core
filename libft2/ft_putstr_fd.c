/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:04:06 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 22:17:18 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*#include <fcntl.h>

int	main(void)
{
	char str[] = "meow";
	int fd = open("hello", O_WRONLY | O_CREAT, 0644);
	ft_putstr_fd(str, fd);
	close(fd);
	return (0);
}*/
