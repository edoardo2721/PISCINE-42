/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:16:57 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/01 11:17:00 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int t;
	int a;
	int z;

	a = 0;
	z = size - 1;
	while (a <= z)
	{
		t = tab[a];
		tab[a] = tab[z];
		tab[z] = t;
		a++;
		z--;
	}
}
