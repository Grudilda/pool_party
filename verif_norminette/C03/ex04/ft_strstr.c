/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:04:17 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/18 18:13:37 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	p = 0;
	if (!to_find)
		return ("\0");
	while (str[i] != to_find[j])
		i++;
	p = i;
	while (str[i] == to_find[j])
	{
		if (to_find[j] == '\0')
			return (&str[p]);
		j++;
		i++;
	}
	return ("\0");
}
