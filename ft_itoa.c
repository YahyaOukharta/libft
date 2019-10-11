/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:41:37 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/11 23:35:28 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_digits(long long n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char		*ft_itoa(int nbr)
{
	long long	n;
	char		*result;
	int			negative;
	int			i;

	n = nbr;
	negative = 0;
	if (nbr < 0)
	{
		n = (long)nbr * -1;
		negative = 1;
	}
	result = (char *)malloc(sizeof(char) * (negative + count_digits(n) + 1));
	if (!result)
		return (0);
	if (negative)
		result[0] = '-';
	i = count_digits(n);
	result[i + negative] = '\0';
	while (--i >= negative - 1)
	{
		result[i + negative] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
