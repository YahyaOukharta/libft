/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:12:18 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 22:17:44 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long	nbr;
	int			sign;

	nbr = n;
	sign = 1;
	if (n < 0)
	{
		nbr = -(long)nbr;
		sign = -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}
