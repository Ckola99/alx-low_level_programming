#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
        int i;
        int j;
        char *leet_key_letters = "aeotl";
        char *leet_key_nums = "43071";

        for (i = 0; str[i] != '\0'; i++)
        {
                for (j = 0; j < strlen(leet_key_letters); j++)
                {
                        if (tolower(str[i]) == leet_key_letters[j])
                        {
                                str[i] = leet_key_nums[j];
                        }
                }
        }
        return str;
}