/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:39:56 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/23 14:51:13 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

void	ft_putnbr(int n)
{
	unsigned int	num;

	if (n < 0)
		ft_putchar('-');
	if (n < 0)
		num = n * -1;
	else
		num = n;
	if (num < 10)
		ft_putchar(num + 48);
	else
	{
		ft_putnbr((num / 10));
		ft_putnbr((num % 10));
	}
}
