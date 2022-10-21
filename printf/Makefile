NAME = libftprintf.a

SRC = ft_printf.c \
		check_functions.c \
		print_hexa.c \
		print_int.c \
		print_pointer.c \
		print_str.c \

INCLUDES = ft_printf.h

OBJ = $(patsubst %.c, %.o, $(SRC))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs ${NAME} $?

%.o : %.c	$(INCLUDES)
		gcc $(FLAGS) -c -I $(INCLUDES) $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re bonus
