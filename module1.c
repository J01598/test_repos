#include <stdio.h>
#include "module1.h"

int input_func(void)
{
	int	x;

	printf("input value >> ");
	scanf("%d", &x);

	return x;
}

void output_func(int x)
{
	printf("x is %d\n", x);

	return;
}
