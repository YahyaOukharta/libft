/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:36:56 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 15:59:27 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c);

int	ft_atoi(char *str)
{
	int res;
	int sign;

	sign = 1;
	res = 0;
	while ((*str > 8 && *str < 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while(ft_isdigit(*str))
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	printf("%d\n",ft_atoi(argv[1]));
}
