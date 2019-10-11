/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:46:34 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 11:52:49 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

int main()
{
	printf("%d",ft_isalnum('a'));
	printf("%d",ft_isalnum('W'));
	printf("%d",ft_isalnum('1'));
	printf("%d",ft_isalnum('+'));
	printf("%d",ft_isalnum('>'));
	printf("%d",ft_isalnum('~'));
}
