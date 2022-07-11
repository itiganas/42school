/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:46:30 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/21 11:07:18 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	int a;
	
	a = ft_str_is_numeric("146563");
	printf ("%d\n", a);
	a = ft_str_is_numeric("a12");
	printf ("%d\n", a);
	a = ft_str_is_numeric("");
	printf ("%d\n", a);
	return (0);
}*/
