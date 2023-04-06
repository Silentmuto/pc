// Ce se afiseaza?

#include <stdio.h>

int main(void)
{
	int x, y;
	x = 5;
	y = 2;

	{
		int y = x++;
		
		{
			int x = 7;
			printf("%d %d\n", x, y);
		}
	}

	printf("%d %d", x, y);

	return 0;
}
