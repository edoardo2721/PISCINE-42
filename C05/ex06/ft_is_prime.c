/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:43:42 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/10 18:39:54 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int m;
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	m = (nb / 2) + 1;
	while (i < m)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
