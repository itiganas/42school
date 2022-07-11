/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itiganas <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:38:38 by itiganas          #+#    #+#             */
/*   Updated: 2022/06/14 17:08:16 by itiganas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write (1, &d, 1);
}

void	ft_print(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < ('7' + 1))
	{
		while (b < ('8' + 1))
		{
			while (c < ('9' + 1))
			{
				ft_print(a, b, c);
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}

/*int main(int argc, const char *argv[])
{
	ft_print_comb();
	return 0;
}*/
