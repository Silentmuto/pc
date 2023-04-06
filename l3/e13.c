// Ce se afiseaza?

#include <stdio.h>

int functie(int a)
{
	printf("functie apelata cu valoarea %d\n", a);
	return a;
}

int main(void)
{
	if (functie(5) && functie(2-(1+1)) && functie(-3) && functie(0))
	{
		printf("DA!\n");
	}
	else
	{
		printf("BA!\n");
	}
	return 0;
}
