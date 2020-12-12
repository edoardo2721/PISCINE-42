/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:27:28 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/10 11:17:48 by ebrovard         ###   ########.fr       */
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
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		ft_putchar(-(nb));
	}
	if (nb > 0)
		ft_putchar(nb);
}
