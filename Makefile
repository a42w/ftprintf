CC = cc
CFLAGS = -Werror -Wall -Wextra
NAME = libftprintf.a
FILES = ft_printf.c \
		ft_printf_functions.c
INCLUDES = ./includes 
OBJS = ${FILES:.c=.o}
all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I$(INCLUDES)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
