/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:26:05 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/28 17:17:25 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0' && a < nb)
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
	char src[100] = "La Piscine ";
	char dest[] = "de juin est presque a la fin";
	unsigned int nb;
	nb = 4;
	printf("Src str is: %s\n ", src);
	printf("Dest str is: %s\n", dest);
	printf("This is concat str: %s\n", ft_strncat(src, dest, nb));
	return (0);
}*/
