/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:22:32 by ebrovard          #+#    #+#             */
/*   Updated: 2020/12/11 19:22:45 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void	ft_args(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > i)
	{
		ft_print(argv[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (argc > i)
	{
		j = i + 1;
		while (argc > j)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_args(argc, argv);
	return (0);
}
