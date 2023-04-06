// Ce se afiseaza?
// cand x = 5, 2, 0, -1

#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	do
	{
		x--;
		printf("%d \n", x);
	} while (x);

	return 0;
}
