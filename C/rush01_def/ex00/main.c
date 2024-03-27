/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:22:45 by kcisse            #+#    #+#             */
/*   Updated: 2024/03/24 19:32:45 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	main(int ac, char **av)
{
	int	*av_tab;
	int	**tab;

	if (ac != 2)
	{
		ft_putstr(ERROR);
		return (2);
	}
	av_tab = check_arg(av[1]);
	if (free_error_av_tab(av_tab) == 0)
		return (2);
	tab = create_map(av_tab);
	if (!(solve_puzzle(tab)))
	{
		ft_putstr(ERROR);
		free_tab(av_tab, tab);
		return (2);
	}
	display_map(tab);
	free_tab(av_tab, tab);
	return (0);
}
