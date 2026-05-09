NAME = libftprint.a

CC = cc 
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

# Carpeta para los objetos
OBJ_DIR = object/

MY_SOURCES = \
ft_printf.c \
ft_putstr.c \
ft_putchar.c  \
ft_puthex_upper.c\ 
ft_puthex.c \
ft_putptr.c \
ft_putunsigned.c

$(NAME): $(MY_OBJECTS)

# 3. Objetos (ahora apuntan a la carpeta object/)
MY_OBJECTS = $(addprefix $(OBJ_DIR), $(MY_SOURCES:.c=.o))

all: $(NAME)

# Crear la librería
$(NAME): $(MY_OBJECTS)
	$(AR) $(NAME) $(MY_OBJECTS)

# Regla para compilar los .c en .o dentro de la carpeta object/
$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clear:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(MY_OBJECTS)

re: fclean all

.PHONY: all clean fclean re
