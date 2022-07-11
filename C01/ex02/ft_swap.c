/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:08:43 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/16 11:02:19 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	p;

	p = *a;
	*a = *b;
	*b = p;
}

/*int	main(void)
{
	int	num1;

	num1 = 10;
	int	num2;
	num2 = 20;
	printf("number 1 is %d, number 2 is %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("number 1 is %d, number 2 is %d\n", num1, num2);
	return (0);
}*/
