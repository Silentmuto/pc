// Ce se afiseaza?

#include <stdio.h>

int main(void)
{
	int x = 5, y = 7;

	while(x > 0)
	{
		int y;
		y = 2 * x;

		printf("%d %d\n", x, y);

		x--;	
	}

	printf("%d %d\n", x, y);

	return 0;
}
