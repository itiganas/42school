/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:08:22 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/14 15:49:37 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z' ;
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
}
/*int main ()
{
	ft_print_reverse_alphabet();
	return (0);
}*/
