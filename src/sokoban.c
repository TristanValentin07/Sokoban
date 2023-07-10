/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** sokoban
*/

#include "my.h"

int sokoban(main_t *main)
{
    call_soko(main);
    while (main->input != 'q') {
        clear();
        find_player(main);
        main = assign_movement(main->input, main);
        restart_game(main);
        main->nb_coin = count_coin(main);
        defeat(main);
        if (main->is_lose == main->nb_box) {
            endwin();
            break;
        }
        if (main->nb_coin == 0)
            break;
        print_map(main);
        refresh();
        main->input = getch();
    }
    endwin();
    return 0;
}
