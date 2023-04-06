#include <stdio.h>
#include <stdbool.h>

_Bool prim(int x)
{
	int i;
	for (i = 2; i <= x/2; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main(void)
{
	int x, i;
	scanf("%d", &x);

	for (i = 2; i <= x; i++)
	{
		printf("%d este ", i);
		if (prim(i))
		{
			printf(" prim!\n");
		}
		else
		{
			printf(" compus!\n");
		}
	}

	return 0;
}
