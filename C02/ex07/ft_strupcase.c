/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:27:47 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/14 15:30:54 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char	*ft_strupcase(char *str)
 {
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
 }

#include <stdio.h>
#include <unistd.h>

 int	main(int ac, char **av)
 {
	if (ac == 2)
	{
		printf("%s\n", av[1]);
		printf("%s\n", ft_strupcase(av[1]));
	}
	printf("end");
	return (0);
 }