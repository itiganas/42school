/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:52:03 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/28 17:24:32 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char s1[] = "121570";
    char s2[] = "12156";
	unsigned int n;

	n = 6;
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", n);
	int	res = ft_strncmp(s1, s2, n);

	if(res > 0)
    {
        printf("s1 character is greater than s2\n");
    }
    else if(res < 0)
    {
        printf("s1 character is less than s2\n");
    }
    else
    {
        printf("s1 and s2 equal\n");
    }
	return (0);
}*/
