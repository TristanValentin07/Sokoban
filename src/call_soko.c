/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** $
*/

#include "my.h"

void call_soko(main_t *main)
{
    main->input = 0;
    initscr();
    curs_set(0);
    keypad(stdscr, true);
    main->nb_coin = count_coin(main);
    main->nb_box = count_box(main);
}
