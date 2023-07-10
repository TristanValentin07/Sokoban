/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** count_box
*/

#include "my.h"

int count_box(main_t *main)
{
    for (main->box_i = 0; main->map[main->box_i] != NULL; main->box_i++) {
        for (main->box_j = 0; main->map[main->box_i][main->box_j] !=
        '\0'; main->box_j++) {
            check_nbbox(main);
        }
    }
    return main->nb_box;
}

int check_nbbox(main_t *main)
{
    if (main->map[main->box_i][main->box_j] == 'X')
        main->nb_box++;
}
