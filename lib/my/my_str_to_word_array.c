/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_str_to_word_array
*/

#include "include/lib.h"

int my_strlen2(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);

    return i;
}

int count_row(char const *str)
{
    char delim = '\n';
    int j = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim)
            j++;
    }
    return j;
}

char **insert(char const *str, char **dbtab)
{
    int x = 0;
    int y = 0;

    char delim = '\n';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != delim) {
            dbtab[x][y] = str[i];
            y++;
        } else {
            dbtab[x][y] = '\0';
            x++;
            y = 0;
        }
    }
    dbtab[x][y] = '\0';
    dbtab[x + 1] = NULL;
    return dbtab;
}

char **my_str_to_word_array(char const *str)
{
    char **dbtab = NULL;
    int word = 0;
    int space = 0;

    word = my_strlen2(str);
    space = count_row(str);
    dbtab = malloc(sizeof(char *) * (space + 1));
    if (dbtab == NULL) {
        return NULL;
    }
    dbtab[space] = NULL;
    for (int i = 0; i < space; i++) {
        dbtab[i] = malloc(sizeof(char) * (word + 1));
        if (dbtab[i] == NULL)
            return NULL;
    }
    dbtab = insert(str, dbtab);
    return dbtab;
}
