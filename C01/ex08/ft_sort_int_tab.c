/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:53:07 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/16 12:10:15 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (size - 1))
	{
		if (tab [i] > tab[i + 1])
		{
			j = tab [i];
			tab [i] = tab[i + 1];
			tab[i + 1] = j;
			i = 0;
		}
		else
		{
		i++;
		}
	}
}

/*int	main(void)
{
	int tab[] = { 5, 1, 3, 4, 8, 9 };

	ft_sort_int_tab (tab, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %d", tab [i]);
	}
	return (0);
}*/
