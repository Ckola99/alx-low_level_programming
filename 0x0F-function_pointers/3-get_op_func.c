#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 *
 * Return: pointer to the corresponding function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
