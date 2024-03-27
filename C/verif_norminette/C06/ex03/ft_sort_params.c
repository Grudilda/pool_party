/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:09:26 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/27 17:33:23 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
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
	int		i;
	char	*temp;

	i = 1;
	while (i < ac && ac != 1)
	{
		while (i > 1 && ft_strcmp(av[i - 1], av[i]) > 0)
		{
			temp = av[i -1];
			av[i - 1] = av[i];
			av[i] = temp;
			i--;
		}
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 2)
		swap_arg(av, ac);
	while (av[i])
	{
		print_arg(av[i]);
		i++;
	}
	return (0);
}
