/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:46:02 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/18 17:23:06 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	if (!base || ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (-1);
	while (base[i])
	{
		j = i + 1;
		
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-'
					|| base[i] <= 32 )
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	unsigned int	base_len;

	if ((base_len = check_base(base)) == (unsigned int)-1)
		return;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr < 0)
		num = nbr * -1;
	else
		num = nbr;
	if (num < base_len)
		ft_putchar(base[num]);
	else
	{
		ft_putnbr_base((num / base_len), base);
		ft_putnbr_base((num % base_len), base);
	}
}

// int main(void)
// {
// 	char *str;

// 	str = "poneyvif";
// 	ft_putnbr_base(-35, str);
// }

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "01");
	write(1, "\n42:", 4);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}