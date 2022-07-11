/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:11:49 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/28 11:06:46 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_min_all(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_min_all(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
			i++;
		}
		if (str[i] < '0' || str[i] > '9')
		{
			if ((str[i] < 'a' || str[i] > 'z')
				&& (str[i] < 'A' || str[i] > 'Z'))
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
char str[] = "saL{ut, comment tu vas ? 42mots qUar\\ante-deux; cinQuAnte+et+un";
printf("%s\n", str);
printf("%s\n", ft_strcapitalize(str));
return(0);
}*/
