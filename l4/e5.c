// Ce se afiseaza?
// cand x = 7

#include <stdio.h>

int oFunctie(int a)
{
	printf("1");
	return a / 3;
}

int aDouaFunctie(int x)
{
	printf("2");
	return x + 2;
}

int main(void)
{
	int x;

	scanf("%d", &x);

	do
	{
		x--;
	} while (oFunctie(x) || aDouaFunctie(x));

	return 0;
}


// 21111111
