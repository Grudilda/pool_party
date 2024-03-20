/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:04:17 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/18 10:51:24 by abonte-b         ###   ########.fr       */
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
		return("\0");
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

#include <string.h>
#include <stdio.h>


int	main(void)
{
	char s1a[] = "This is OK for now";
	char s2a[] = "OK";
	char s1b[] = "This is OK for now";
	char s2b[] = "OK";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}