/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:34:32 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/19 19:54:20 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_lowcaser(char *str)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 			str[i] = str[i] + 32;
// 		i++;
// 	}
// }

// char	*ft_strcapitalize(char *str)
// {
// 	int	i;

// 	i = 0;
// 	ft_lowcaser(str);
// 	while (str[i] != '\0')
// 	{
// 		if ((i == 0 && (str[i] <= 'z' && str[i] >= 'a')) || ((str[i -1] == ' '
// 					|| str[i -1] == '+' || str[i -1] == '-')
// 				&& (str[i] >= 'a' && str[i] <= 'z')))
// 		{
// 			str[i] = str[i] - 'a' + 'A';
// 		}
// 		i++;
// 	}
// 	return (str);
// }

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

#include <unistd.h>
#include <stdio.h>

int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	char c2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char c1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", c2);
	printf("%s\n", ft_strcapitalize(c1));
	printf("%s\n", c);
	printf("%s\n\n", ft_strcapitalize(c));
	printf("%s\n", ft_strcapitalize(c1));
	printf("%s\n", ft_strcapitalize(c));
}