# Nome del progetto
NAME = libftprintf.a

# Compilatore e opzioni
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Lista dei file sorgente
SRC_FILES = ft_printf.c \
			ft_aux.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_printhex.c

# Costruzione della lista di oggetti
OBJ_FILES = $(SRC_FILES:.c=.o)

# Regole
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
