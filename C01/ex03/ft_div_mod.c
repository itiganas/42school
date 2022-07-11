/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:17:09 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/16 12:11:20 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;

	int a;
	int b;

	a = 12;
	b = 3;
	ft_div_mod (a, b, &div, &mod);
	printf ("Div is %d\n", div);
	printf ("Mod is %d\n", mod);
	return (0);
}*/
