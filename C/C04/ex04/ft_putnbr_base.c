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

void	check_base(char *base)
{
	int	i;
	int	j;
	
	i = 0;
	if (!base || ft_strlen(base) == 0 || ft_strlen(base) == 1)
		{
			ft_putstr("ERROR\n");
			return;
		}
	while (base[i])
	{
		j = i + 1;
		
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				{
					ft_putstr("ERROR\n");
					return;
				}
			j++;
		}
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	unsigned int	base_len;

	check_base(base);
	base_len = ft_strlen(base);
	if (nbr < 0)
		ft_putchar('-');
	if (nbr < 0)
		num = nbr * -1;
	else
		num = nbr;
	if (num < 10)
		ft_putchar(base[num]);
	else
	{
		ft_putnbr_base((num / base_len), base);
		ft_putnbr_base((num % base_len), base);
	}
}

int main(void)
{
	char *str;

	str = "01";
	ft_putnbr_base(2, str);
}