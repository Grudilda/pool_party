/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:39:00 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/17 12:28:05 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10 + (str[i] - 48));
		i++;
	}
	num = num * sign;
	return (num);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac != 3)
	{
		write(1, "error", 5);
		return (-1);
	}
	x = ft_atoi(av[1]);
	y = ft_atoi(av[2]);
	rush(x, y);
	return (0);
}
