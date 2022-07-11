/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:37:01 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/21 11:13:52 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int main(void)
{
	char *str;

	str = "A23B";
	printf("%d\n", ft_str_is_uppercase(str));
	str = "hello";
	printf("%d\n", ft_str_is_uppercase(str));
	str = "ASC";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}*/
