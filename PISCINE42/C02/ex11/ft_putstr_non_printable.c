/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:17:53 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/07 16:14:26 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(unsigned char c)
{
	unsigned	char	hex1;
	unsigned	char	hex2;

	hex1 = "0123456789abcdef"[c / 16];
	hex2 = "0123456789abcdef"[c % 16];
	write(1, &hex1, 1);
	write(1, &hex2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hex(str[i]);
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}
