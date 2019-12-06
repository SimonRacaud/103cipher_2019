/*
** EPITECH PROJECT, 2019
** 103cipher_2019
** File description:
** decode
*/

#include "103cipher.h"

void decode(matrix_t *key, matrix_t *msg)
{
    matrix_t *result;

    display_mkey(key);
    result = matrix_product(msg, key);
    display_coded_msg(result);
    destroy_matrix(result);
}
