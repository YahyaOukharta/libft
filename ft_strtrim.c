/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:12:44 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/10 23:04:42 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		trimmed_len(const char *src,const char *set)
{
	int len;
	int srclen; 
	int j = 0;
	int i = 0;
	
	len = 0;
	srclen = ft_strlen(src);
	while(i < srclen && ft_strchr(set,src[i]))
	{
		i++;
		len++;
	}
	i = srclen - 1;
	while(i >= 0 && ft_strchr(set,src[i]))
	{
		i--;
		len++;
	}
	return (srclen - len);
}

char	*ft_strtrim(const char *str, const char *set)
{
	int		i;
	char	*result;
	int final_len;

	final_len = trimmed_len(str,set);

	result = (char *)malloc(sizeof(char) * (final_len + 1));
	if(!result)
		return (0);
	i = 0;
	while(i < ft_strlen(str) && ft_strchr(set,str[i]))
		i++;
	ft_strlcpy(result,&str[i],final_len + 1);
	return (result);	
}

int main(int argc, char **argv)
{
	printf("%s\n",ft_strtrim(argv[1],argv[2]));
}
