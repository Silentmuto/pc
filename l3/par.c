#include <stdio.h>
#include <stdbool.h>

_Bool par(int x)
{
	return !(x % 2);
}

int main(void)
{
	int x;
	scanf("%d", &x);

	if (par(x))
	{
		printf("par!\n");
	}
	else
	{
		printf("impar!\n");
	}
	return 0;
}
