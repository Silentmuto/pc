// Ce se afiseaza?

#include <stdio.h>
#include <stdbool.h>

int verificare(int x)
{
	return x % 6;
}

int main(void)
{
	int x;

	for (x = 1; verificare(x); x++)
	{
		printf("%d ", x);
	}

	return 0;
}
