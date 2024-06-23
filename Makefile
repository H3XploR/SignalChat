CLIENT = client 
SERVER = server	

SOURCE_CLIENT = src/client/client.c
SOURCE_SERVER = src/server/server.c

LIBFT = lib/libft/libft.a
FT_PRINTF = lib/ft_printf/libftprintf.a

$(CLIENT): $(SOURCE_CLIENT)
		cc -Iincludes -Wall -Werror -Wextra -g -o client $(SOURCE_CLIENT) $(LIBFT) 

$(SERVER): $(SOURCE_SERVER)
		cc -Iincludes -Wall -Werror -Wextra -g -o server $(SOURCE_SERVER) $(FT_PRINTF) $(LIBFT)

all : $(CLIENT) $(SERVER)

clean : 
		@rm client
		@rm server

fclean :
		@rm client
		@rm server

re : fclean
		make all

.PHONY: all re fclean clean
