/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:34:32 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/15 11:37:58 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowcaser(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowcaser(str);
	while (str[i] != '\0')
	{
		if ((i == 0 && (str[i] <= 'z' && str[i] >= 'a')) || ((str[i -1] == ' '
					|| str[i -1] == '+' || str[i -1] == '-')
				&& (str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
