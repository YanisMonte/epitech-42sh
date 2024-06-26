/*
** EPITECH PROJECT, 2024
** shell_get_err.c
** File description:
** shell_get_err.c
*/

#include "my.h"

////////////////////////////////////////////////////////////
// int shell_get_err(shell_t *shell)
//
// shell -> structure that contains all the data of the shell
//
// This function returns the shell error output value.
//
// RETURN VALUE : int that represent the error output of the shell
////////////////////////////////////////////////////////////
int shell_get_err(shell_t *shell)
{
    return shell->err;
}
