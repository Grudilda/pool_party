/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:08:30 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/24 19:32:26 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

void	free_tab(int *av_tab, int **tab)
{
	int	i;

	i = 0;
	free(av_tab);
	while (i < MAP_LENGTH)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	free_error_av_tab(int *av_tab)
{
	if (!(av_tab))
	{
		free(av_tab);
		ft_putstr(ERROR);
		return (0);
	}
	return (2);
}
