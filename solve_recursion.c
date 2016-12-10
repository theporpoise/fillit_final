/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_recursion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 20:34:36 by mburson           #+#    #+#             */
/*   Updated: 2016/12/09 20:34:38 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fillit.h>

static _Bool	does_fit(char **map, int piece, int x, int y)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (map_mask(map, g_map_size, x + g_p_crds_y[piece][i],\
				y + g_p_crds_x[piece][i]) != '.')
			return (0);
		i++;
	}
	return (1);
}

static char		**solution_dup(char **solution)
{
	char	**new;
	int		x;
	int		y;

	if (!(new = malloc_solution_map(g_map_size)))
	{
		//todo: handle error
		return (NULL);
	}
	y = 0;
	while (y < g_map_size)
	{
		x = 0;
		while (x < g_map_size)
		{
			new[y][x] = solution[y][x];
			x++;
		}
		y++;
	}
	return (new);
}

static void		add_piece(char **solution, int step, int x, int y)
{
	int		i;
	char	c;

	c = 'A' + step;
	i = 0;
	while (i < 4)
	{
		solution[y + g_p_crds_x[g_input[step]][i]][x\
			+ g_p_crds_y[g_input[step]][i]] = c;
		i++;
	}
}

char			**recursion_head(char **solution, int step)
{
	int		x;
	int		y;
	char	**new;

	print_solution(solution);
	if (g_input[step] == -1)
		return (solution);
	y = 0;
	while (y < g_map_size)
	{
		x = 0;
		while (x < g_map_size)
		{
			if (does_fit(solution, g_input[step], x, y))
			{
				add_piece((new = solution_dup(solution)), step, x, y);
				if ((new = recursion_head(new, step + 1)))
					return (new);
			}
			x++;
		}
		y++;
	}
	free(solution);
	return (NULL);
}
/*
char			**recursion_head(char **solution, int map_size, int step)
{
	if (g_map_size != 7)
	{
		free(solution);
		return (NULL);
	}
	char **new;
	new = solution_dup(solution, g_map_size);
	free(solution);
	if (does_fit(new, g_input[2], 3, 0))
		add_piece(new, 2, 3, 0);
	if (does_fit(new, g_input[step], 1, 0))
		add_piece(new, step, 1, 0);
	if (does_fit(new, g_input[1], 2, 1))
		add_piece(new, 1, 2, 1);
	return (new);

}
*/
