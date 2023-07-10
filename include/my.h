/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ncurses.h>
#include <sys/stat.h>
#include <stdbool.h>

#ifndef MY_H_
    #define MY_H_

typedef struct main_s {
    int x;
    int y;
    int count;
    int stockcount;
    int input;
    char **map;
    char **save_map;
    int player_pos_x;
    int player_pos_y;
    int box_pos_x;
    int box_pos_y;
    char *buff;
    int size;
    int x_coin;
    int y_coin;
    int x_defeat;
    int y_defeat;
    int is_lose;
    int nb_box;
    int nb_coin;
    int box_i;;
    int box_j;;
    int count_i;
    int count_j;
}main_t;

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_strcmp(const char *str1, char *str2);
long long my_compute_power_rec(int nb, int p);

int my_printf(const char *format, ...);
int choose_format(const char *format, va_list param);
int good_nbflag(char const *format, char *array, int i, va_list param);
int if_flag(char const *format, char *array, va_list param, int i);
int read_format(char const *format, char *array, va_list param);
void call_flags2(const char *format, va_list param);

int flag_int_decimal(va_list param);
int flag_char(va_list param);
int flag_str(va_list param);
int flag_pourcent(va_list param);
int flag_unsigned_int_decimal(va_list param);
int flag_unsigned_int_octal(va_list param);
int flag_unsigned_int_hexa_sml(va_list param);
int flag_unsigned_int_hexa_big(va_list param);
int flag_unsigned_int_binary(va_list param);
int flag_str_big(va_list param);
int flag_pntr(va_list param);
int flag_unsigned_int_hexa_pntr(va_list param);
int flag_f(va_list param);
int flag_f_hex_sml(va_list param);
int flag_f_hex_big(va_list param);
int flag_f_exp_sml(va_list param);
int flag_f_exp_big(va_list param);
int flag_g(va_list param);
int flag_g_f(double nb, int exponent);
int flag_g_e(double nb, int exponent);
int exp_print_big(int e);
int exp_print_sml(int e);
int hex_exp_print(int exponent);

int my_put_binary(int nb);
int my_put_hexa_sml(unsigned long long int nb);
int my_put_hexa_big(int nb);
int my_put_hexa_pntr(unsigned long long int nb);

char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);
bool load_map(char const *filepath, main_t *main);
int sokoban(main_t *main);
void help(void);
void find_player(main_t *main);
static void get_pos_player(main_t *main);
void find_box_pos(main_t *main);
static void get_pos_box(main_t *main);
void print_map(main_t *main);
main_t *left(main_t *main);
main_t *right(main_t *main);
main_t *up_player(main_t *main);
main_t *down(main_t *main);
main_t *assign_movement(int input, main_t *main);
void detect_nocoin(main_t *main);
void respawn_coin(main_t *main);
void restart_game(main_t *main);
int rule_defeat(main_t *main);
int check_ifbox(main_t *main);
int defeat(main_t *main);
int check_nbcoin(main_t *main);
int count_coin(main_t *main);
int count_box(main_t *main);
int check_nbbox(main_t *main);
int split_defeat(main_t *main);
void call_soko(main_t *main);

#endif /* !MY_H_ */
