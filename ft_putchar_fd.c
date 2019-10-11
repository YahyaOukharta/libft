/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:45:55 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 18:21:36 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd,&c,1);
}

int main(int argc, char **argv)
{
	int fd = open(argv[1], O_WRONLY | O_APPEND);
	ft_putnbr_fd(10, fd);
}
