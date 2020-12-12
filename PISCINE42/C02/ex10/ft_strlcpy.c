/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:43:11 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/03 18:45:03 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		if (i < size - 1 && size > 1)
		{
			dest[i] = src[i];
			i++;
		}
		len++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (len);
}
