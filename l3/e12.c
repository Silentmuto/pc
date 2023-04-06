// Ce se afiseaza pentru diverse valori ale lui a?

#include <stdio.h>

int functie(int a)
{
	printf("functie apelata cu valoarea %d\n", a);
	return a;
}

int main(void)
{
	if (functie(1) && functie(2) && functie(-5) && functie(0) && functie(7)){
		printf("DA!\n");
	}
	else
	{
		printf("BA!\n");
	}
	return 0;
}
