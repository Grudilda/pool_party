/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:44:11 by kcisse            #+#    #+#             */
/*   Updated: 2024/03/24 18:35:33 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	is_number_valid(int nbr)
{
	if (nbr < '1' || nbr > '4')
		return (0);
	return (nbr - '0');
}

int	is_arg_values_assigned(char *arg, int *tab, int nbr_count)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < nbr_count)
	{
		tab[i] = is_number_valid(arg[j]);
		if (tab == 0)
			return (0);
		i++;
		j += 2;
	}
	return (1);
}

int	*check_arg(char *arg)
{
	int	i;
	int	nbr_count;
	int	*tab;

	i = 0;
	nbr_count = 1;
	while (arg[i++])
	{
		if (arg[i] == ' ')
			nbr_count++;
		else if (arg[i] < '1' && arg[i] > '4')
			return (0);
	}
	if (ft_strlen(arg) != 31 || nbr_count != 16)
		return (0);
	tab = malloc(sizeof(int) * nbr_count);
	if (tab == NULL)
		return (0);
	if (!is_arg_values_assigned(arg, tab, nbr_count))
		return (0);
	return (tab);
}
