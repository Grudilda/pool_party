/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:46:04 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/20 13:56:29 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_whitespace(int i, char *str)
{
	while (str[i] && (str[i] <= 32))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] && (str[i] <= 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
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

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%i\n", ft_atoi(av[1]));
// 	return (0);
// }

#include <string.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}
