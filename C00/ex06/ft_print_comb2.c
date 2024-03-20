/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:19:23 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/14 13:53:48 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	magic_print(int i, int j)
{
	ft_putchar((i / 10 + 48));
	ft_putchar((i % 10 + 48));
	ft_putchar(' ');
	ft_putchar((j / 10 + 48));
	ft_putchar((j % 10 + 48));
	if (i < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			magic_print(i, j);
			j++;
		}
		i++;
	}
}
