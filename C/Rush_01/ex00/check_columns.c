/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_columns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:38:21 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/24 16:21:01 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	check_column_reverse(int **column, int j)
{
	int	i;
	int	max;
	int	count_max;

	count_max = 0;
	max = 0;
	i = 5;
	while (i > 0)
	{
		i--;
		if (column[i][j] == 0)
			return (TRUE);
		if (column[i][j] > max)
		{
			max = column[i][j];
			count_max++;
		}
	}
	if (count_max != column[5][j])
		return (FALSE);
	return (TRUE);
}

int	check_column(int **column, int j)
{
	int	i;
	int	max;
	int	count_max;

	count_max = 0;
	max = 0;
	i = 0;
	while (i < 5)
	{
		i++;
		if (column[i][j] == 0)
			return (TRUE);
		if (column[i][j] > max)
		{
			max = column[i][j];
			count_max++;
		}
	}
	if (count_max != column[0][j])
		return (FALSE);
	if (!(check_column_reverse(column, j)))
		return (FALSE);
	return (TRUE);
}

int	check_double_column(int **map, int j)
{
	int	case_up;
	int	case_down;

	case_up = 1;
	while (case_up < 4)
	{
		case_down = case_up + 1;
		while (case_down < 5)
		{
			if (map[case_up][j] == map[case_down][j]
				&& map[case_up][j] != 0 && map[case_down][j] != 0)
				return (FALSE);
			case_down++;
		}
		case_up++;
	}
	return (TRUE);
}
