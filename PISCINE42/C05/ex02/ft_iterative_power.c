/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:18:00 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/09 12:21:13 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int r;

	if (nb == 1)
		return (1);
	if (power < 0)
		return (0);
	r = 1;
	while (power-- > 0)
		r = r * nb;
	return (r);
}
