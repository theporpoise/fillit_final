/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:20:32 by mburson           #+#    #+#             */
/*   Updated: 2016/12/08 17:20:34 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** gets piece part and returns no part when out of bounds	
*/
_Bool	get_pp(int piece, int x, int y)
{
	if (x > 3 || x < 0 || y > 3 || y < 0)
		return (0);
	return (g_piece_types[piece][x][y]);
}

/*
** same as get_pp but for sides
** side 0 is top, 1 is right, 2 is bottom, and 3 is left
*/
_Bool	get_ps(int piece, int side, int x, int y)
{
	if (x > 3 || x < 0 || y > 3 || y < 0 || side < 0 || side > 3)
		return (0);
	return (g_piece_sides[piece][side][x][y]);
}
/*
void	piece_sides_init(void)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < PIECE_TYPE_COUNT)
	{

	}
}
*/