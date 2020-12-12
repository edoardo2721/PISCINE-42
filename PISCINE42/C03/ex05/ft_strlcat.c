* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 09:47:43 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/09 19:33:37 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_tot_len(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}

unsigned int		ft_src_len(char *src)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0')
		j++;
	return (j);
}

unsigned int		ft_dest_len(char *dest)
{
	unsigned int	l;

	l = 0;
	while (dest[l] != '\0')
		l++;
	return (l);
}

char				*ft_cat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;

	while (dest[i] != '\0' && i < size - 1)
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	char			*c;

	a = 0;
	b = 0;
	c = 0;
	a = ft_tot_len(dest, src);
	b = ft_src_len(dest, src);
	c = ft_dest_len(dest, src);
	if(size < c)
		return(b + size);
	c = ft_cat(dest, src, size);
	return (a);
}
