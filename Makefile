NAME = fillit

LIBRARY = libft

LIBA = libft/libft.a

OBJS = \
	fillit.o\
	global_init.o\
	piece_mask.o\
	init_pieces_points.o\
	g_minos.o\
	input_parse.o\
	solve.o\
	helper.o\
	solve_recursion.o\
	string_not_val.o

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $^

$(NAME): $(OBJS)
	make -C $(LIBRARY)
	gcc -o $@ $^ $(LIBA) -I $(LIBRARY)

clean:
	rm -f $(OBJS)
	make fclean -C $(LIBRARY)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBRARY)

re: clean all
