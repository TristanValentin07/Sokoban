/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** assign_movement
*/

#include "my.h"

main_t *assign_movement(int input, main_t *main)
{
    if (input == KEY_LEFT)
        main = left(main);
    if (input == KEY_RIGHT)
        main = right(main);
    if (input == KEY_UP)
        main = up_player(main);
    if (input == KEY_DOWN)
        main = down(main);
    respawn_coin(main);
    return main;
}
