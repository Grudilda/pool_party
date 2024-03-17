/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:38:01 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/16 18:37:08 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
