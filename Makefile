# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 18:59:10 by aechafii          #+#    #+#              #
#    Updated: 2022/05/29 19:01:11 by aechafii         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client

NAME_2 = server

SRC_1 = client.c minitalk_utils.c

SRC_2 = server.c minitalk_utils.c

BNS_1 = client_bonus.c minitalk_utils.c

BNS_2 = server_bonus.c minitalk_utils.c

OBJ_1 = $(SRC_1:.c=.o)

OBJ_2 = $(SRC_2:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME) $(NAME_2)

$(NAME) : $(OBJ_1)
	$(CC) $(FLAGS) $(OBJ_1)  -o $(NAME)

$(NAME_2) : $(OBJ_2)
	$(CC) $(FLAGS) $(OBJ_2)  -o $(NAME_2)

%.o : %.c
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJ_1)
	rm -rf $(OBJ_2)

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME_2)

re : fclean all

bonus : 
	$(CC) $(FLAGS) $(BNS_1)  -o $(NAME)
	$(CC) $(FLAGS) $(BNS_2)  -o $(NAME_2)