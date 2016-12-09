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
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	print_error(void)
{
	write(1, "error\n", 6);
}

int		main(int argc, char **argv)
{
	int		pieces[26];
	int		open_msg;
	
	
	if (argc != 2 || (!(open_msg = open(argv[1], O_RDONLY))))
	{
		print_error();
		return (0);
	}

	init_pieces(pieces, open_msg);
	
	return (0);	
}

