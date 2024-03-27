/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving_machine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 10:53:03 by fpaulas-          #+#    #+#             */
/*   Updated: 2024/03/24 18:36:58 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	check_error(int **tab, int *line, int *column, int num)
{
	tab[*line][*column] = num;
	if (!check_line(tab[*line]) || !check_double_line(tab[*line]))
		return (FALSE);
	if (!check_column(tab, *column) || !check_double_column(tab, *column))
		return (FALSE);
	return (TRUE);
}

int	empty_case(int **map, int *line, int *column)
{
	*line = 1;
	while (*line < 5)
	{
		*column = 1;
		while (*column < 5)
		{
			if (map[*line][*column] == 0)
				return (TRUE);
			(*column)++;
		}
		(*line)++;
	}
	return (FALSE);
}

int	solve_puzzle(int **map)
{
	int	num;
	int	line;
	int	column;

	if (!empty_case(map, &line, &column))
		return (TRUE);
	num = 1;
	while (num < 5)
	{
		if (check_error(map, &line, &column, num))
		{
			map[line][column] = num;
			if (solve_puzzle(map))
				return (TRUE);
		}
		map[line][column] = 0;
		num++;
	}
	return (FALSE);
}
