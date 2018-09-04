CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = bsq
SRCS = ./srcs/*.c
OBJS = ./*.o

all:  $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(OBJS) -o  $(NAME)
	@rm ./*.o
	@echo "OK"

$(OBJS) :
	@echo "-------------------------------------------------"
	@$(CC) $(CFLAGS) -c $(SRCS) -I ./srcs/

clean:
	rm -f ./*.o

re: clean all
