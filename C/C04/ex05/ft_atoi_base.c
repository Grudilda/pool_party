/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:46:00 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/17 13:46:01 by abonte-b         ###   ########.fr       */
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

int	convert_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	num;

	i = 0;
	j = 0;
	sign = 1;
	num = 0;
	check_base(base);
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
		num = (num * (ft_strlen(base)) + (convert_char(str[i], base)));
		i++;
	}
	num = num * sign;
	return (num);
}

#include <stdio.h>

int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}

// modifier ls (str[i] - 48) de la ligne 29 par une fonction de conversion
// parametres un char (str[i]) + char *base ** prototypage ----> int convert_char(char c, char *base);
// cherche le caractere dans la base ----> code erreur si missing
// et ca return le compteur (init a 0)
