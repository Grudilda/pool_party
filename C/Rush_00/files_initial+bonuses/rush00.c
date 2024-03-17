/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:20:57 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/16 17:29:35 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_up_down(int x)
{
	int	n;

	n = 1;
	while (n <= x)
	{
		if (n == 1 || n == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		n++;
	}
	write(1, "\n", 1);
}

void	print_middle(int x)
{
	int	n;

	n = 1;
	while (n <= x)
	{
		if (n == 1 || n == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		n++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	n;

	n = 1;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
	{
		write(1, "error", 5);
		return ;
	}
	while (n <= y)
	{
		if (n == 1 || n == y)
			print_up_down(x);
		else
			print_middle(x);
		n++;
	}
}
