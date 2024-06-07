/*
** EPITECH PROJECT, 2024
** builtin_handle_exit_exprsyn_error.c
** File description:
** builtin_handle_exit_exprsyn_error.c
*/

#include "my.h"
#include "shell.h"
#include <ctype.h>

int builtin_handle_exit_exprsyn_error(command_t *command, shell_t *shell)
{
    if (command_get_argc(command) > 2) {
        shell_set_code(shell, 1);
        return 1;
    }
    if (command_get_argc(command) == 1)
        return 0;
    if (!isalpha(command_get_argv(command)[1][0]))
        return 0;
    for (size_t i = 0; command->argv[1][i]; i++)
        if (isalpha(command->argv[1][i])) {
            shell_set_code(shell, 1);
            return 1;
        }
    return 0;
}
