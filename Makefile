NAME = libftprint.a

CC = cc 
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

MY_SORCES =


$(NAME): $(MY_OBJECTS)

MY_OBJECTS = $(MY_SORCES: .c= .o)

all: $(NAME)

%.o: %.c 
	$(AR) $(NAME) $(MY_OBJECTS)
	chmod 755 $(NAME)

clear:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(MY_OBJECTS)

re: fclean all

.PHONY: all clean fclean re
