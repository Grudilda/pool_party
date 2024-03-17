/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:25:28 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/17 15:17:06 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}


#include <string.h>
#include <stdio.h>

int main()
{
	char *str1 = "bonjour";
	char *str2 = "bon";
	char *str3 = "bonjoureuh";
	char *str4 = "bonjour";

	printf("strcmp_off : r1=%i r2=%i r3=%i \n",strcmp(str1, str2), strcmp(str1, str3), strcmp(str1, str4));
	printf("strcmp_mine : r1=%i r2=%i r3=%i\n",ft_strcmp(str1, str2), ft_strcmp(str1, str3), ft_strcmp(str1, str4));
}