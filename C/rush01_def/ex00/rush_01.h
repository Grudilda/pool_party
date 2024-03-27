/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:46:07 by abonte-b          #+#    #+#             */
/*   Updated: 2024/03/24 19:33:01 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define MAP_LENGTH 6
# define TRUE 1
# define FALSE 0
# define ERROR "Error\n"

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		*check_arg(char *arg);
int		**create_map(int *av_tab);
int		check_line(int *line);
int		check_column(int **column, int j);
int		check_double_line(int *line);
int		check_double_column(int **map, int j);
int		solve_puzzle(int **map);
void	display_map(int **map);
void	free_tab(int *av_tab, int **tab);
int		free_error_av_tab(int *av_tab);

#endif