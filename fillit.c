/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:19:33 by mburson           #+#    #+#             */
/*   Updated: 2016/12/10 11:27:02 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <unistd.h>

static void		print_error(void)
{
	write(1, "error\n", 6);
}

static void		print_map(char **solution)
{
	int		x;
	int		y;

	if (!solution)
	{
		write(1, "no solution found\n", 18);
		return ;
	}
	y = 0;
	while (y < g_map_size)
	{
		x = 0;
		while (x < g_map_size)
		{
			write(1, &(solution[y][x]), 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

int				main(int argc, char **argv)
{
	char	**solution;

	if (!(g_input = input_parse(argc, argv)))
	{
		print_error();
		return (0);
	}
	/*
	write(1, "\n", 1);
	write(1, "input finished\n", 14);
	write(1, "\n", 1);
	write(1, "\n", 1);
	*/
	init_pieces_points();
	/*
	print_input();
	*/
	solution = solve();
	print_map(solution);
	return (0);
}
