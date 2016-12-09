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

/*
** input_parse.c
*/
void					input_parse(int *pieces, int open_msg);

/*
** startup.c
*/
void					init_sides(void);

/*
** piece_mask.c
*/
_Bool					get_pp(int piece, int x, int y);
_Bool					get_ps(int piece, int side, int x, int y);

/*
** global_init.c
*/
# define P_TYPE_CNT 19
extern _Bool			g_piece_sides[P_TYPE_CNT][4][4][4];
extern const _Bool		g_piece_types[P_TYPE_CNT][4][4];

/*
** debug.c
*/
void					print_piece_of_type(int type);
void					print_piece(const _Bool piece[4][4]);

#endif
