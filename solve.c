/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 19:10:00 by mburson           #+#    #+#             */
/*   Updated: 2016/12/09 19:10:02 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char			**malloc_solution_map(int size)
{
	char	**solution;
	int		i;

	if (!(solution = (char**)malloc(sizeof(char*) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!(solution[i] = (char*)malloc(sizeof(char) * size)))
		{
			free_n_pointers(solution, i, sizeof(char*));
			free(solution);
			return (NULL);
		}
		i++;
	}
	return (solution);
}

static char		**init_solution(char **solution, int size)
{
	int		x;
	int		y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			solution[y][x] = '.';
			x++;
		}
		y++;
	}
	return (solution);
}

static char		**solve_size(int size)
{
	char	**solution;

	if (!(solution = malloc_solution_map(size)))
	{
		//todo: handle error
		return (NULL);
	}
	init_solution(solution, size);
	solution = recursion_head(solution, size, 0);
	return (solution);
}

static	int		cal_input_len(void)
{
	int i;

	i = 0;
	while (input[i] != -1)
		i++;
	return (i);
}

static	int		min_solution_size(int len)
{
	int	i;

	i = 4;
	while (len * 4 > i * i)
		i++;
	return (i);
}

char			**solve(void)
{
	char	**solution;
	int		size;

	size = min_solution_size(cal_input_len());
	while (!(solution = solve_size(size)))
		size++;
	print_solution_of_size(solution, size);
	return (solution);
}
