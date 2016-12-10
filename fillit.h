/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:33:26 by mburson           #+#    #+#             */
/*   Updated: 2016/12/07 19:56:42 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define MAX_INPUT_SIZE 26

/*
** matts stuff
*/
int						*input_parse(int argc, char **argv);

/*
** init_pieces_points.c
*/
void					init_pieces_points(void);

/*
** piece_mask.c
*/
_Bool					get_pp(int piece, int x, int y);

/*
** global_init.c
** g_piece_sides_key: [type][side][x][y]
**     side 0 is top, 1 is right, 2 is bottom, and 3 is left
*/
# define P_TYPE_CNT 19

extern int				g_p_crds_x[P_TYPE_CNT][4];
extern int				g_p_crds_y[P_TYPE_CNT][4];
extern const _Bool		g_piece_types[P_TYPE_CNT][4][4];

/*
** debug.c
*/
void					print_piece_of_type(int type);
void					print_piece(const _Bool piece[4][4]);
void					print_points(int piece);
void					print_pieces_points(void);

#endif
