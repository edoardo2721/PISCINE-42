/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:06:52 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/07 15:49:29 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;
	char			*point;

	point = dest;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		point[i] = src[i];
		i++;
	}
	while (i < n)
	{
		point[i] = '\0';
		i++;
	}
	return (dest);
}
