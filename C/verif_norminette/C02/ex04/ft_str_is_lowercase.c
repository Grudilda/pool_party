/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:08:49 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/13 14:16:37 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!(str))
		return (1);
	while (str[i])
	{
		if (((str[i] >= 97) && (str[i] <= 122)))
			i++;
		else
			return (0);
	}
	return (1);
}
