#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 0, b = 10; a < b; a++, b--)
	{
		printf("%d %d\n", a, b);
	}

	return 0;
}
