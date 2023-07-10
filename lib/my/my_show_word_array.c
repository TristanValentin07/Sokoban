/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_show_word_array
*/

#include "include/lib.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        printw(tab[i]);
    }
    return 0;
}
