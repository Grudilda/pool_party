/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:09:26 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/20 19:58:58 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_arg(char *str)
{
	ft_putstr(str);
	ft_putstr("\n");
}

void	swap_arg(char **av, int ac)
{
	char	tmp;
	int		i;
	int		swap_count;

	swap_count = 1;
	while (swap_count != 0)
	{
		swap_count = 0;
		i = 1;
		while (i < ac - 1)
		{
			if (strcmp(av[i +1], av[i]) < 0)
			{
				tmp = *av[i];
				*av[i] = *av[i + 1];
				*av[i + 1] = tmp;
				swap_count++;
			}
			i++;
		}
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac != 0)
		swap_arg(av, ac);
	while (av[i])
	{
		print_arg(av[i]);
		i++;
	}
	return (0);
}


