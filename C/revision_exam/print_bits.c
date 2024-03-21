/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grudi <grudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:13:12 by grudi             #+#    #+#             */
/*   Updated: 2024/03/21 14:22:43 by grudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int	i;

// 	i = 128;
// 	while (octet >= 0 && i)
// 	{
// 		if (octet / i == 1)
// 			write(1, "1", 1);
// 		else
// 			write(1, "0", 1);
// 		if (octet / i)
// 			octet -= i;
// 		i /= 2;
// 	}
// }

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
	{
		if (octet & i)
			write(1, "1", 1);
		else		
			write(1, "0", 1);
	}
}

# include <unistd.h>
#include <stdlib.h>


int		main(int argc, char **argv)
{
	(void)argc;
	int n = atoi(argv[1]);
	print_bits2(n);
	write(1, "\n", 1);
}