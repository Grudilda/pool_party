/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:27:36 by kcisse            #+#    #+#             */
/*   Updated: 2024/03/24 15:31:55 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	*create_line(void)
{
	int	*line;
	int	i;

	i = 0;
	line = malloc(sizeof(int) * MAP_LENGTH);
	if (line == NULL)
		return (FALSE);
	while (i < MAP_LENGTH)
	{
		line[i] = 0;
		i++;
	}
	return (line);
}

void	assign_values(int **map, int *arg_tab)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
		map[0][i++] = arg_tab[j++];
	i = 1;
	while (i <= 4)
		map[5][i++] = arg_tab[j++];
	i = 1;
	while (i <= 4)
		map[i++][0] = arg_tab[j++];
	i = 1;
	while (i <= 4)
		map[i++][5] = arg_tab[j++];
}

int	**create_map(int *arg_tab)
{
	int	**map;
	int	i;

	i = 0;
	map = malloc(sizeof(int *) * MAP_LENGTH);
	if (map == NULL)
		return (FALSE);
	while (i < MAP_LENGTH)
	{
		map[i] = create_line();
		i++;
	}
	assign_values(map, arg_tab);
	return (map);
}
