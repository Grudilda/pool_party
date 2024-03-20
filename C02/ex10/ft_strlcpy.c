/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:49:02 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/15 12:55:30 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (i < size -1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *dest;
	char *src;
	unsigned int n;
		
	src = "Hello World !";
	dest = (char*)malloc(15);
	n = strlen(dest);
	printf("%u\n",n);
	n = ft_strlcpy(dest, src, n);
	printf("%u\n",n);

	return(0);
}