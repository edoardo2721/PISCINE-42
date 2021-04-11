/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:43:15 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/01 14:37:22 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && a == '9' && a == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_while(char a, char b, char c, char d)
{
	while (b <= '9')
	{
		c = a;
		while (c <= '9')
		{
			d = b + 1;
			while (d <= '9')
			{
				ft_putchar(a, b, c, d);
				d++;
			}
			d++;
			c++;
		}
		c++;
		b++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		ft_while(a, b, c, d);
		a++;
	}
}
