NAME = fillit

OBJS = \
	debug.o\
	\
	fillit.o\
	global_init.o\
	parse.o\
	startup.o


CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $@ $^ -I .

%.o: %.c
	gcc $(CFLAGS) -I . -c -o $@ $<

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: clean all
