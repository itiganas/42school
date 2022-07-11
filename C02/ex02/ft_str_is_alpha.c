/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:00:07 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/22 09:31:14 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (!((str[a] >= 'a' && str[a] <= 'z')
				|| (str[a] >= 'A' && str[a] <= 'Z')))
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
	str = "hello";
	printf("%d\n", ft_str_is_alpha(str));
	str = "12";
	printf("%d\n", ft_str_is_alpha(str));
	str = "h3i";
	printf("%d\n", ft_str_is_alpha(str));
	str = "12ah3i";
	printf("%d\n", ft_str_is_alpha(str));
	str = "he is so cool";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}*/
