/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:37:26 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/13 18:40:08 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str0 = "\n\a\b\f";
	str1 = "0123456";
	str2 = "HELLOWORLD";
	str3 = "\0";
	str4 = "@?/'dwq!!!`~";
	printf("*%s* r=%i\n", str0, ft_str_is_printable(str0));
	printf("%s r=%i\n", str1, ft_str_is_printable(str1));
	printf("%s r=%i\n", str2, ft_str_is_printable(str2));
	printf("*%s* r=%i\n", str3, ft_str_is_printable(str3));
	printf("*%s* r=%i\n", str4, ft_str_is_printable(str4));
	return (0);
}
