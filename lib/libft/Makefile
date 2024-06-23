SOURCES = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlen.c ft_isprint.c ft_strlcat.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c ft_isascii.c

OBJECTS = $(SOURCES:.c=.o)

EXTRA = a.out a.out.dSYM main.c

NAME = libft.a

COMPILER = cc

FLAGS = -c -Wall -Werror -Wextra -I -g3

all : $(NAME)

$(NAME) : $(OBJECTS)
	@ar -rcs libft.a *.o

$(OBJECTS) : $(SOURCES)
	$(COMPILER) $(FLAGS) $(SOURCES)

clean : 
	@rm -f $(OBJECTS)

fclean : clean
	@rm -rf $(NAME) $(EXTRA)

re :
	@make fclean
	@make all

.PHONY: fclean clean all re
