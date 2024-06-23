NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -c -I$(HEADER_DIR) -g3
RM = rm -f
AR = ar rcs
SOURCES = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putptr_fd.c ft_put_unsigned_nbr_fd.c ft_puthex_upper_fd.c ft_puthex_lower_fd.c ft_putstr_fd.c
SOURCES_DIR = source/
HEADER = ft_printf.h
HEADER_DIR = header/
OBJECTS = $(addprefix $(SOURCES_DIR), $(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES_DIR)%.o :$(SOURCES_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	@make all

.PHONY: all clean fclean re

