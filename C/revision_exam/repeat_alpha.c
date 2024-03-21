/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grudi <grudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:49:28 by grudi             #+#    #+#             */
/*   Updated: 2024/03/21 11:29:05 by grudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_modified(char c, int times)
{
	while (times >= 0)
	{
		write(1, &c, 1);
		times--;
	}
}

int		how_many_times(char c)
{
	char	*str;
	int		i;
	
	i = 0;
	str = "abcdefghijklmnopqrstuvwxyz";
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	print_count;

	i = 0;
	print_count = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{	
			print_count = how_many_times(str[i]);
			print_modified(str[i], print_count);
			print_count = 0;
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	else
		write(1, "\n", 1);
}