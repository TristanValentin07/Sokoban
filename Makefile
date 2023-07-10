##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

CC = gcc -lncurses -o

SRC =	./src/main.c			\
		./src/sokoban.c			\
		./src/help.c			\
		./src/loadmap.c			\
		./src/find_pos.c		\
		./src/print_map.c		\
		./src/assign_movement.c	\
		./src/move_player.c		\
		./src/respawn_coin.c	\
		./src/restart_game.c	\
		./src/defeat.c			\
		./src/count_coin.c		\
		./src/count_box.c		\
		./src/call_soko.c		\

TESTNAME	=	unit_tests	\

TEST_LIST	=	tests/testunit.c	\

TEST = $(TESTNAME) $(SRC) $(TEST_LIST) --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

NAME =	my_sokoban	\

CFLAGS = -Wall -Wextra -L ./lib -lmy -I ./include

all: Makelib $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(NAME) $(OBJ) $(CFLAGS)

Makelib:
	make -C ./lib/my
	@echo -e "\n\e[92mSuccessfully compiled\e[0m"

unit_tests: fclean ./lib/my
	$(CC) -o $(TEST) $(TESTNAME) $(CFLAGS)
	@echo -e "\n\e[92mUnit Tests fonctional\e[0m"

test_run: unit_tests
	./$(TESTNAME) && gcovr --exclude tests/

clean:
	make fclean -C ./lib/my
	@echo -e "\n\e[92mSuccessfully clean\e[0m"

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)
	clear

re: clean fclean all

.PHONY: all clean fclean re debug
