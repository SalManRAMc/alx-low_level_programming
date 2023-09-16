#include "3-calc.h"

/**
 * get_op_func - returns a pointer to a function based on operator given
 *
 * @s: operator
 *
 * Return: Pointer to corresponding operating function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
