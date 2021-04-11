/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:59:44 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/10 17:59:59 by ebrovard         ###   ########.fr       */
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
		i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (!ft_is_prime(nb))
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
