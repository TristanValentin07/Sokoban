/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_strlen
*/
#include "include/lib.h"

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}
