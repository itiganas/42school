/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:26:48 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/21 11:12:37 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (!(str[a] >= 'a' && str[a] <= 'z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int	main(void)
{
	char *str;
	str = "hello";
	printf("%d\n", ft_str_is_lowercase(str));
	str = "ASCs";
	printf("%d\n", ft_str_is_lowercase(str));
	str = "";
	printf("%d\n", ft_str_is_lowercase(str));
}*/
