// Ce functii se executa si ce se afiseaza cand:
// a) a = 0
// b) a = 2
// c) a = 4

#include <stdio.h>

int jumatate(int a)
{
	return a / 2;
}

int sfert(int x)
{
	return a / 4;
}

int main(void)
{
	int a;
	scanf("%d", &a);

	if (jumatate(a) || sfert(a)) 
	{
		printf("DA!");
	}
	else
	{
		printf("BA!\n");
	}
	return 0;
}
