/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-tristan.valentin
** File description:
** move_player
*/

#include "my.h"

main_t *left(main_t *main)
{
    if (main->map[main->player_pos_y][main->player_pos_x - 1] != '#') {
        if (main->map[main->player_pos_y][main->player_pos_x - 1] != 'X' &&
            main->map[main->player_pos_y][main->player_pos_x - 1] != '#') {
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y][main->player_pos_x - 1] = 'P';
        }
        if (main->map[main->player_pos_y][main->player_pos_x - 1] == 'X' &&
            main->map[main->player_pos_y][main->player_pos_x - 2] != '#' &&
            main->map[main->player_pos_y][main->player_pos_x - 2] != 'X') {
            main->map[main->player_pos_y][main->player_pos_x - 2] = 'X';
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y][main->player_pos_x - 1] = 'P';
        }
    }
    return main;
}

main_t *right(main_t *main)
{
    if (main->map[main->player_pos_y][main->player_pos_x + 1] != '#') {
        if (main->map[main->player_pos_y][main->player_pos_x + 1] != 'X' &&
            main->map[main->player_pos_y][main->player_pos_x + 1] != '#') {
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y][main->player_pos_x + 1] = 'P';
        }
        if (main->map[main->player_pos_y][main->player_pos_x + 1] == 'X' &&
            main->map[main->player_pos_y][main->player_pos_x + 2] != '#' &&
            main->map[main->player_pos_y][main->player_pos_x + 2] != 'X') {
            main->map[main->player_pos_y][main->player_pos_x + 2] = 'X';
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y][main->player_pos_x + 1] = 'P';
        }
    }
    return main;
}

main_t *up_player(main_t *main)
{
    if (main->map[main->player_pos_y - 1][main->player_pos_x] != '#') {
        if (main->map[main->player_pos_y - 1][main->player_pos_x] != 'X' &&
            main->map[main->player_pos_y - 1][main->player_pos_x] != '#') {
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y - 1][main->player_pos_x] = 'P';
        }
        if (main->map[main->player_pos_y - 1][main->player_pos_x] == 'X' &&
            main->map[main->player_pos_y - 2][main->player_pos_x] != '#' &&
            main->map[main->player_pos_y - 2][main->player_pos_x] != 'X') {
            main->map[main->player_pos_y - 2][main->player_pos_x] = 'X';
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y - 1][main->player_pos_x] = 'P';
        }
    }
    return main;
}

main_t *down(main_t *main)
{
    if (main->map[main->player_pos_y + 1][main->player_pos_x] != '#') {
        if (main->map[main->player_pos_y + 1][main->player_pos_x] != 'X' &&
            main->map[main->player_pos_y + 1][main->player_pos_x] != '#') {
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y + 1][main->player_pos_x] = 'P';
            }
        if (main->map[main->player_pos_y + 1][main->player_pos_x] == 'X' &&
            main->map[main->player_pos_y + 2][main->player_pos_x] != '#' &&
            main->map[main->player_pos_y + 2][main->player_pos_x] != 'X') {
            main->map[main->player_pos_y + 2][main->player_pos_x] = 'X';
            main->map[main->player_pos_y][main->player_pos_x] = ' ';
            main->map[main->player_pos_y + 1][main->player_pos_x] = 'P';
        }
    }
    return main;
}
