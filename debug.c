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

void	print_type_sides(int type)
{
	printf("\n");
	printf("   sides for type: %d\n", type);
	printf("\n");
	print_piece(g_piece_sides[type][0]);
	printf("\n");
	print_piece(g_piece_sides[type][1]);
	printf("\n");
	print_piece(g_piece_sides[type][2]);
	printf("\n");
	print_piece(g_piece_sides[type][3]);
	printf("\n");
	printf("\n");
}