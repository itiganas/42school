/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:41:24 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/28 16:58:38 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}
/*int	main(void)
{
	char src[15] = "This is ";
	char dest[] = "piscineeee";
	printf("Src str is : %s\n ", src);
	printf("Dest str is: %s\n", dest);
	printf("This is concat str: %s\n", ft_strcat(src, dest));
	return (0);
}*/
