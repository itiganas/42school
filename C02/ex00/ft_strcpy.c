/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:48:54 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/28 09:09:28 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{	
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "Bonjhourr";
	char dest[] = "Hi";

	printf("Source str before copy: %s\n", src);
	printf("Dest src before copy: %s\n", dest);	
	ft_strcpy (dest, src);
	printf("Source str after copy: %s\n", src);
	printf("Dest src after copy: %s\n", dest);
	return (0);
}*/
