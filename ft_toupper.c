/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:20:00 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 12:26:58 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

int main()
{
	printf("%c",ft_toupper('4'));
	printf("%c",toupper('4'));
	printf("%c",ft_toupper('a'));
	printf("%c",toupper('a'));
	printf("%c",ft_toupper('Z'));
	printf("%c",toupper('Z'));
}
