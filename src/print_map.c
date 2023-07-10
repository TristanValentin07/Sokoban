/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-tristan.valentin
** File description:
** print_map
*/

#include "my.h"

void print_map(main_t *main)
{
    for (int i = 0; main->map[i] != NULL; i++) {
        printw(main->map[i]);
        printw("\n");
    }
}
