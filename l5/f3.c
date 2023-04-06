// Ce se afiseaza pentru
// x = 1
// x = 5
// x = 0

#include <stdio.h>

int main(void)
{
	int x;
	
	scanf("%d", &x);

	do {
		printf("%d ", x);
		x--;
	} while (x);

	return 0;
}
