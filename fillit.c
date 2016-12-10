/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:19:33 by mburson           #+#    #+#             */
/*   Updated: 2016/12/07 19:56:37 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <unistd.h>

static void		print_error(void)
{
	write(1, "error\n", 6);
}

int				main(int argc, char **argv)
{
	char	**solution;
	if (!(input = input_parse(argc, argv)))
	{
		print_error();
		return (0);
	}
	write(1, "\n", 1);
	write(1, "input finished\n", 14);
	write(1, "\n", 1);
	write(1, "\n", 1);
	init_pieces_points();
	//print_pieces_points();
	print_input();
	solution = solve();
	return (0);
}
