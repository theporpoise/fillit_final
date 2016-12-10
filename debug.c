#include <fillit.h>
#include <stdio.h>

void	print_piece_of_type(int type)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (get_pp(type, i, j))
				printf("#");
			else
				printf(".");
			j++;
		}
		printf("\n");
		i++;
	}
}

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

void	print_points(int piece)
{
	int i;
	
	printf("   %d points:\n", piece);
	i = 0;
	while (i < 4)
	{
		printf("(%d, %d)\n", g_p_crds_x[piece][i], g_p_crds_y[piece][i]);
		i++;
	}
}


void	print_pieces_points(void)
{
	int i;

	i = 0;
	while (i < P_TYPE_CNT)
	{
		print_points(i);
		printf("\n");
		i++;
	}
}

