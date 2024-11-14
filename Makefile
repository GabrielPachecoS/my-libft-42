NAME = 

CC = 

CFLAGS = 

SRC = 

OBJ = 

OBJ_BONUS =

HEADER = 

AR = 

RM = 

all:

bonus:

$(NAME):$(OBJ)
	$(AR) $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:

re: fclean all

.PHONY: all bonus clean fclean re
