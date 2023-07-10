/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-tristan.valentin
** File description:
** find_pos
*/

#include "my.h"

void find_player(main_t *main)
{
    for (main->y = 0; main->map[main->y] != NULL; main->y++) {
        for (main->x = 0; main->map[main->y][main->x] != '\0'; main->x++) {
            get_pos_player(main);
        }
    }
}

static void get_pos_player(main_t *main)
{
    if (main->map[main->y][main->x] == 'P') {
        main->player_pos_x = main->x;
        main->player_pos_y = main->y;
    }
}

void find_box_pos(main_t *main)
{
    for (main->y = 0; main->map[main->y] != NULL; main->y++) {
        for (main->x = 0; main->map[main->y][main->x] != '\0'; main->x++) {
            get_pos_box(main);
        }
    }
}

static void get_pos_box(main_t *main)
{
    if (main->map[main->y][main->x] == 'X') {
        main->box_pos_x = main->x;
        main->box_pos_y = main->y;
    }
}
