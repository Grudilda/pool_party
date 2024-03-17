/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:57:24 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/14 13:49:32 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	magic_print_max(int i, int j, int n)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar('0' + n);
}

void	magic_print_normie(int i, int j, int n)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar('0' + n);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			n = j + 1;
			while (n < 10)
			{
				if (i == 7 && j == 8 && n == 9)
					magic_print_max(i, j, n);
				else
					magic_print_normie(i, j, n);
				n++;
			}
			j++;
		}
		i++;
	}
}
