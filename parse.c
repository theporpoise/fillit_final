/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:26:03 by mburson           #+#    #+#             */
/*   Updated: 2016/12/08 15:26:05 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <piece_types.h>

#define BUFF_SIZE 100

void	print_piece(const _Bool piece[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (piece[i][j])
				printf("#");
			else
				printf(".");
			j++;
		}
		printf("\n");
		i++;
	}
}

//void	piece_compare(const _Bool p1[4][4], const _Bool p2[4][4])

void	init_pieces(int *pieces, int open_msg)
{
	char		buff[BUFF_SIZE + 1];
	int			read_msg;

	pieces[1] = 1;
	read_msg = read(open_msg, buff, BUFF_SIZE);
	buff[read_msg] = '\0';
	//printf("%s", buff);
	int i;
	i = 0;
	while (i < 19)
	{
		print_piece(piece_types[i]);
		printf("\n");
		i++;
	}
}