/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** count_coin
*/

#include "my.h"

int count_coin(main_t *main)
{
    main->nb_coin = 0;
    for (main->count_i = 0; main->map[main->count_i] !=
    NULL; main->count_i++) {
        for (main->count_j = 0; main->map[main->count_i][main->count_j] !=
        '\0'; main->count_j++) {
            check_nbcoin(main);
        }
    }
    return main->nb_coin;
}

int check_nbcoin(main_t *main)
{
    if (main->map[main->count_i][main->count_j] == 'O')
        main->nb_coin++;
    return main->nb_coin;
}
