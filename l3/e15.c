// Ce se afiseaza?

#include <stdio.h>

int functie(int a)
{
	printf("functie apelata cu valoarea %d\n", a);
	return a;
}

int gunctie(int x)
{
	printf("gunctie cu %d?\n", x);
	return x/2;
}

int main(void)
{
	if (functie(0) || gunctie(1) && gunctie(0))
	{
		printf("DA!\n");
	}
	else
	{
		printf("BA!\n");
	}
	return 0;
}
