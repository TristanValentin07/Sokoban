##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

SRC     =	my_show_word_array.c		\
			my_str_to_word_array.c		\
			my_strlen.c					\
			my_putstr.c					\
			my_putchar.c				\
			my_put_nbr.c				\
			my_printf.c					\
			my_strcmp.c					\
			my_printf_assets/call_flags2.c	\
			my_printf_assets/flags_char.c	\
			my_printf_assets/flags_str.c	\
			my_printf_assets/flags_float1.c	\
			my_printf_assets/flags_float2.c	\
			my_printf_assets/flags_float3.c	\
			my_printf_assets/flags_int1.c	\
			my_printf_assets/flags_int2.c	\
			my_printf_assets/flags_int3.c	\
			my_printf_assets/flags_pntr.c	\
			my_printf_assets/my_compute_power_rec.c			\
			my_getnbr.c						\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I ./include/

NAME = 	libmy.a

libmy:	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo -e "\n\e[92mLib functionnal\e[0m"
	@cp $(NAME) ../$(NAME)

includemy:
	@cp my.h ../../include/my.h

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)
	@clear

.PHONY: libmy includemy clean fclean
