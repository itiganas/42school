/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:18:27 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/16 17:01:23 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 4;
	ft_ultimate_div_mod (&a, &b);
	printf("Division result of 12/4 is : %d\n", a);
	printf("Mode is : %d\n", b);
	return (0);
}*/
