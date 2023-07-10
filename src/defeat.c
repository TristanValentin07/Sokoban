/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** defeat
*/

#include "my.h"

int defeat(main_t *main)
{
    main->is_lose = 0;
    for (main->y_defeat = 0; main->map[main->y_defeat] != NULL;
    main->y_defeat++) {
        for (main->x_defeat = 0;
        main->map[main->y_defeat][main->x_defeat] != '\0';
        main->x_defeat++) {
            check_ifbox(main);
        }
    }
    return main->is_lose;
}

int check_ifbox(main_t *main)
{
    if (main->map[main->y_defeat][main->x_defeat] == 'X') {
        rule_defeat(main);
    }
    return main->is_lose;
}

int rule_defeat(main_t *main)
{
    if ((main->map[main->y_defeat][main->x_defeat + 1] == '#' ||
    main->map[main->y_defeat][main->x_defeat + 1] == 'X') &&
        (main->map[main->y_defeat - 1][main->x_defeat] == 'X' ||
        main->map[main->y_defeat - 1][main->x_defeat] == '#')) {
        main->is_lose++;
    }
    if ((main->map[main->y_defeat][main->x_defeat - 1] == '#' ||
    main->map[main->y_defeat][main->x_defeat - 1] == 'X') &&
        (main->map[main->y_defeat - 1][main->x_defeat] == 'X' ||
        main->map[main->y_defeat - 1][main->x_defeat] == '#')) {
        main->is_lose++;
    }
    split_defeat(main);
    return main->is_lose;
}

int split_defeat(main_t *main)
{
    if ((main->map[main->y_defeat][main->x_defeat + 1] == '#' ||
    main->map[main->y_defeat][main->x_defeat + 1] == 'X') &&
        (main->map[main->y_defeat + 1][main->x_defeat] == 'X' ||
        main->map[main->y_defeat + 1][main->x_defeat] == '#')) {
        main->is_lose++;
    }
    if ((main->map[main->y_defeat][main->x_defeat - 1] == '#' ||
    main->map[main->y_defeat][main->x_defeat - 1] == 'X') &&
        (main->map[main->y_defeat + 1][main->x_defeat] == 'X' ||
        main->map[main->y_defeat + 1][main->x_defeat] == '#')) {
        main->is_lose++;
    }
}
