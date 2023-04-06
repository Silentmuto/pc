// Ce se afiseaza?

#include <stdio.h>

int main(void)
{
	int x;
	
	for (x = 16; x - 1; x = -x / 2)
	{
		printf("%d ", x);
	}

	return 0;
}
