NAME = libftprintf.a

CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

MY_SOURCES = \
    ft_printf.c \
    ft_putchar.c \
    ft_putnbr.c \
    ft_putstr.c \
    ft_putunsigned.c \
    ft_puthex.c \
    ft_puthex_upper.c \
    ft_putptr.c \

# Añadimos el prefijo de la carpeta a los objetos
OBJ_DIR = objects
MY_OBJECTS = $(addprefix $(OBJ_DIR)/, $(MY_SOURCES:.c=.o))

all: $(NAME)

# Regla para compilar los .o dentro de la carpeta objects
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MY_OBJECTS)
	$(AR) $(NAME) $(MY_OBJECTS)
	chmod 755 $(NAME)

.PHONY: all clean fclean re

clean:
    rm -rf $(OBJ_DIR)

fclean: clean
    rm -f $(NAME)

re: fclean all

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
