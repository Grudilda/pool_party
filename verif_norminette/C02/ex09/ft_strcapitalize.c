/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:34:32 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/20 15:52:54 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	iznogood(char *str, int i)
{
	if (i == 0 && (str[i] <= 'z' && str[i] >= 'a'))
		return (0);
	else if (((str[i - 1] >= ' ' && str[i - 1] <= '/') || (str[i - 1] >= ':'
				&& str[i - 1] <= '@') || (str[i - 1] >= '['
				&& str[i - 1] <= '`') || (str[i - 1] >= '{'
				&& str[i - 1] <= '~')) && (str[i] <= 'z' && str[i] >= 'a'))
		return (0);
	return (1);
}

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
	while (str[i])
	{
		if (iznogood(str, i) == 0)
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}
