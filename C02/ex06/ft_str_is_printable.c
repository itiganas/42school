/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:51:10 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/22 16:21:16 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 127))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int	 main(void)
{
	char *str;

	str = "hello";
	printf("%d\n", ft_str_is_printable(str));
	str = "ASC";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}*/
