/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:46:04 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/17 14:20:45 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;
	int	num;

	i = 0;
	j = 0;
	sign = 1;
	num = 0;
	while (str[i] && (str[i] <= 32 || str[i] == 43 || str[i] == 45))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10 + (str[i] - 48));
		i++;
	}
	num = num * sign;
	return (num);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%i\n", ft_atoi(av[1]));
	return (0);
}



