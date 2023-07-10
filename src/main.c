/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    main_t *main = malloc(sizeof(main_t));
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        help();
    if (main == NULL) {
        my_printf("%s\n", "Malloc failed");
        return 84;
    }
    if (!load_map(av[1], main)) {
        my_printf("%s\n", "Read map failed");
        return 84;
    }
    if (main->map == NULL) {
        my_printf("%s\n", "map empty");
        return 84;
    }
    sokoban(main);
    return 0;
}
