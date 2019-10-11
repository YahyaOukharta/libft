/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:27:37 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/09 12:29:35 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}

int main()
{
	printf("%c",ft_tolower('4'));
	printf("%c",tolower('4'));
	printf("%c",ft_tolower('W'));
	printf("%c",tolower('W'));
	printf("%c",ft_tolower('a'));
	printf("%c",tolower('a'));
}
