/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:58:04 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/17 17:00:45 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	j;

	if (!src || !dest)
		return (0);
	i = 0;
	while (dest[i])
		i++;
	j=0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[10] = "Size";
	char s3b[10] = "Same";
	char s4b[10] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf("%s:%s\n", ft_strncat(s1a, s2a, 5), strncat(s1b, s2b, 5));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s3a, s4a, 10), strncat(s3b, s4b, 10));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s5a, s6a, 0), strncat(s5b, s6b, 0));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}