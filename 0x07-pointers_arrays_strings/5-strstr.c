#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && strpbrk(haystack, needle))
		{
			return haystack;
		}
		haystack++;
	}

}
