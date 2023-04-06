// Ce se afiseaza?
// cand x = 5, 2, 0, -1

#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	while(x)
	{
		printf("%d \n", x);
		x--;
	}

	return 0;
}
