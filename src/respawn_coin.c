/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** respawn_coin
*/

#include "my.h"

void respawn_coin(main_t *main)
{
    for (main->y_coin = 0; main->map[main->y_coin] != NULL; main->y_coin++) {
        for (main->x_coin = 0; main->map[main->y_coin][main->x_coin] != '\0';
        main->x_coin++) {
            detect_nocoin(main);
        }
    }
}

void detect_nocoin(main_t *main)
{
    if (main->map[main->y_coin][main->x_coin] != 'P'
    && main->map[main->y_coin][main->x_coin] != 'X'
    && main->save_map[main->y_coin][main->x_coin] == 'O')
        main->map[main->y_coin][main->x_coin] = 'O';
}
