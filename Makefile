
UTILS = minitalk_utils.c

HEADER = minitalk.h
HEADER_B = minitalk_bonus.h

SERVER = server
CLIENT = client
SRV_SRC = server.c
CLT_SRC = client.c

SERVER_B = server_bonus
CLIENT_B = client_bonus
SRV_SRC_B = server_bonus.c
CLT_SRC_B = client_bonus.c

NAME = $(SERVER) $(CLIENT)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(SERVER): $(SRV_SRC) $(UTILS) $(HEADER)
	$(CC) $(CFLAGS) $(SRV_SRC) $(UTILS) -o $(SERVER)

$(CLIENT): $(CLT_SRC) $(UTILS) $(HEADER)
	$(CC) $(CFLAGS) $(CLT_SRC) $(UTILS) -o $(CLIENT)

bonus: $(SERVER_B) $(CLIENT_B)

$(SERVER_B): $(SRV_SRC_B) $(UTILS) $(HEADER_B)
	$(CC) $(CFLAGS) $(SRV_SRC_B) $(UTILS) -o $(SERVER_B)

$(CLIENT_B): $(CLT_SRC_B) $(UTILS) $(HEADER_B)
	$(CC) $(CFLAGS) $(CLT_SRC_B) $(UTILS) -o $(CLIENT_B)

clean:
	rm -rf $(SERVER)
	rm -rf $(CLIENT)

fclean: clean
	rm -rf $(SERVER_B)
	rm -rf $(CLIENT_B)

re: fclean all
