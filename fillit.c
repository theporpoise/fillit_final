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

static void		print_error(void)
{
	write(1, "error\n", 6);
}

int				main(int argc, char **argv)
{
	int		*input;
	int		open_msg;

	if (!(input = input_parse(argc, argv));
	{
		print_print();
		return (0);
	}
	init_piece_points();
	print_type_sides(1);
	return (0);
}
