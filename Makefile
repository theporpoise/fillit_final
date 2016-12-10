NAME = fillit

OBJS = \
	debug.o\
	\
	fillit.o\
	global_init.o\
	piece_mask.o\
	init_pieces_points.o\
	g_minos.o\
	input_parse.o\
	solve.o\
	helper.o\
	solve_recursion.o

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $@ $^ -I . libft.a

%.o: %.c
	gcc $(CFLAGS) -I . -c -o $@ $^

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: clean all
