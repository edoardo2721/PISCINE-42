/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:27:52 by ebrovard          #+#    #+#             */
/*   Updated: 2020/11/30 11:35:25 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	char c;

	if (nb == 0)
		return ;
	else
	{
		ft_putchar(nb / 10);
		c = '0' + nb % 10;
		write(1, &c, 1);
		nb = nb / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putchar(-(nb));
	}
	else
		ft_putchar(nb);
}
