// Ce se afiseaza?
// cand x = 6

#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	do
	{
		printf("%d ", x);
		if (x % 3 == 1)
		{
			break;
		}
		x--;
	} while (x);

	return 0;
}
