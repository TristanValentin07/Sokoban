/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-tristan.valentin
** File description:
** loadmap
*/

#include "my.h"

bool load_map(char const *filepath, main_t *main)
{
    struct stat st;
    int fd = open(filepath, O_RDONLY);
    if (fd == -1 || stat(filepath, &st) == -1)
        return false;
    main->size = st.st_size;
    main->buff = malloc(sizeof(char *) * (main->size + 1));
    main->buff[main->size] = '\0';
    if (read(fd, main->buff, main->size) == -1) {
        free(main->buff);
        return false;
    }
    if (main->buff == NULL)
        return false;
    main->map = my_str_to_word_array(main->buff);
    main->save_map = my_str_to_word_array(main->buff);
    if (!main->map || !main->save_map) {
        free(main->buff);
        return false;
    }
    return true;
}
