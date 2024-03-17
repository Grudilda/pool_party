/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:41:07 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/17 16:12:39 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char *str1 = "bonjour";
	char *str2 = "bon";
	char *str3 = "bonjoureuh";
	char *str4 = "bonjour";

	printf("strncmp_off : r1=%i r2=%i r3=%i \n",strncmp(str1, str2, 7), strncmp(str1, str3, 9), strncmp(str1, str4, 7));
	printf("strncmp_mine : r1=%i r2=%i r3=%i\n",ft_strncmp(str1, str2, 7), ft_strncmp(str1, str3, 9), ft_strncmp(str1, str4, 7));
}
