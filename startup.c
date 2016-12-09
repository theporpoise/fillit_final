/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:36:19 by mburson           #+#    #+#             */
/*   Updated: 2016/12/08 18:36:21 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <stdio.h>

static void		piece_side_init(int side, int off_x, int off_y)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	y;

	i = 0;
	x = 0;
	y = 0;
	while (i < P_TYPE_CNT)
	{
		while (x < 4)
		{
			while (y < 4)
			{
				if (get_pp(i, x, y) && !get_pp(i, x + off_x, y + off_y))
					g_piece_sides[i][side][x][y] = 1;
				else
					g_piece_sides[i][side][x][y] = 0;
				y++;
			}
			x++;
		}
		i++;
	}
}

void			init_sides(void)
{
	piece_side_init(0, -1, 0);
	printf("\n");
	print_piece(g_piece_sides[0][0]);
	printf("\n");
	printf("\n");
}
