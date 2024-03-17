/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:49:18 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/12 18:21:57 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	size_mod;

	j = 0;
	i = 0;
	size_mod = size - 1;
	while (j < (size / 2))
	{
		i = tab[j];
		tab[j] = tab[size_mod - j];
		tab[size_mod - j] = i;
		j++;
	}
}
