#include <stdio.h>

int main(void)
{
	int a = 5, b = 7;

	printf("a = %d, b = %d\n", a, b);

	{
		int a = 50;
		b = -2;

		printf("a = %d, b= %d\n", a, b);
	}

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
