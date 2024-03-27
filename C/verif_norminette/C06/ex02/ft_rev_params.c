/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:05:13 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/20 17:08:31 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_arg(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac != 0)
	{
		while (i >= 1)
		{
			print_arg(av[i]);
			i--;
		}
	}
	return (0);
}
