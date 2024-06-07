/*
** EPITECH PROJECT, 2024
** builtin_do_at.c
** File description:
** builtin_do_at.c
*/

#include "my.h"
#include <stdio.h>

int builtin_do_at(command_t *command, shell_t *shell)
{
    if (command == NULL || shell == NULL)
        return 84;
    dprintf(2, "@: Not Implemented.\n");
    shell_set_code(shell, 1);
    return 0;
}
