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

static char		**build_solution_map(int size)
{
	char	**solution;
	int		i;
	int		j;

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
		j = 0;
		while (j < size)
		{
			solution[i][j] = '.';
			j++;
		}
		i++;
	}
	return (solution);
}

static char		**solve_size(int *input, int size)
{
	char	**solution;

	input[1]++; //todo: remove this line
	solution = build_solution_map(size);
	//solution = asldfhsahd(solution, size, input, step);
	return (solution);
}

static	int		cal_input_len(int *input)
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

char			**solve(int *input)
{
	char	**solution;
	int		size;

	size = min_solution_size(cal_input_len(input));
	while (!(solution = solve_size(input, size)))
		size++;
	print_solution_of_size(solution, size);
	return (solution);
}
