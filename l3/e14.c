// Ce se afiseaza?

#include <stdio.h>

int functie(int a)
{
	printf("functie apelata cu valoarea %d\n", a);
	return a;
}

int main(void)
{
	if (functie(0) || functie(5) || functie(4) || functie(0))
	{
		printf("DA!\n");
	}
	else
	{
		printf("BA!\n");
	}
	return 0;
}
