/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** restart_game
*/

#include "my.h"

void restart_game(main_t *main)
{
    if (main->input == ' ') {
        main->map = main->save_map;
        main->save_map = my_str_to_word_array(main->buff);
    }
}
