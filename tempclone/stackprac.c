#include <stdio.h>
#include <stdlib.h>

int push(char newest_item, char *stack, int *index, int size) 
{
    if (*index >= size) 
	{
		printf("insufficient memory available\n");
		return (-1);
	} 
	else
	{
		stack[*index] = newest_item;
		printf("%c inputted in stack\n", stack[*index]);
		(*index)++;
	}
    return (*index);
}

int isempty(char *stack)
{
	if (!stack)
		printf("stack is empty\n");
	else
		printf("stack isn't empty\n");

	return (0);
}

int pop(char *stack, int *index)
{
	char popped_value;

	(*index)--;
	popped_value = stack[*index];
	stack[*index] = '\0';

	return (popped_value);
}

int top(char *stack,int *index)
{
	printf("%c with index %i is currently at the top of stack\n", stack[*index], *index);
	return (0);
}
int main(__attribute__((unused)) int argc, __attribute__((unused))char **argv) {
    int index = 0, size = 10;
    char stack[10];
    char x = 'a', y = 'b', z = 'c';

	isempty(stack);
    push(x, stack, &index, size);
    push(y, stack, &index, size);
    push(z, stack, &index, size);

	top(stack, &index);
	pop(stack, &index);
	top(stack, &index);
	isempty(stack);

    return 0;
}

