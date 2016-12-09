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
#include <fillit.h>

#define BUFF_SIZE 100

//void	piece_compare(const _Bool p1[4][4], const _Bool p2[4][4])

void	input_parse(int *pieces, int open_msg)
{
	char		buff[BUFF_SIZE + 1];
	int			read_msg;

	pieces[1] = 1;
	read_msg = read(open_msg, buff, BUFF_SIZE);
	buff[read_msg] = '\0';
	//printf("%s", buff);
}