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

void	print_input(void)
{
	int i;

	printf("   input:\n");
	i = 0;
	while (i < MAX_INPUT_SIZE)
	{
		printf("%d,  ", g_input[i]);
		i++;
	}
	printf("\n\n");
}

void	print_solution(char **solution)
{
	int		x;
	int		y;

	if (!solution)
	{
		printf("solution is null\n");
		return ;
	}
	y = 0;
	while (y < g_map_size)
	{
		x = 0;
		while (x < g_map_size)
		{
			printf("%c", solution[y][x]);
			x++;
			if (x < g_map_size)
				printf(" ");
		}
		printf("\n");
		y++;
	}
	printf("\n");
}
