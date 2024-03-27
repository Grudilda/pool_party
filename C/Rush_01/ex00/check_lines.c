/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:36:09 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/24 16:21:56 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	check_line_reverse(int *line)
{
	int	i;
	int	max;
	int	count_max;

	i = 5;
	max = 0;
	count_max = 0;
	while (i > 0)
	{
		i--;
		if (line[i] == 0)
			return (TRUE);
		if (line[i] > max)
		{
			max = line[i];
			count_max++;
		}
	}
	if (count_max != line[5])
		return (FALSE);
	return (TRUE);
}

int	check_line(int *line)
{
	int	i;
	int	max;
	int	count_max;

	max = 0;
	i = 0;
	count_max = 0;
	while (i < 5)
	{
		i++;
		if (line[i] == 0)
			return (TRUE);
		if (line[i] > max)
		{
			max = line[i];
			count_max++;
		}
	}
	if (count_max != line[0])
		return (FALSE);
	if (!(check_line_reverse(line)))
		return (FALSE);
	return (TRUE);
}

int	check_double_line(int *line)
{
	int	case_left;
	int	case_right;

	case_left = 1;
	while (case_left < 4)
	{
		case_right = case_left + 1;
		while (case_right < 5)
		{
			if (line[case_left] == line[case_right]
				&& line[case_left] != 0 && line[case_right] != 0)
				return (FALSE);
			case_right++;
		}
		case_left++;
	}
	return (TRUE);
}
