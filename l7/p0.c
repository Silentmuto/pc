#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int* pa;

	int* P;

	pa = &a;

	printf("Adresa unde se gaseste variabila a este: %p\n", pa);

	*pa = 12;

	printf("Valoarea lui a este %d\n", a);
	
	P = (int*) (malloc(1 * sizeof(int)));

	printf("Valoarea lui \"P\" este: %p\n", P);
	printf("Valoarea lui P+1 este: %p\n", P+1);
	printf("Valoarea lui P+2 este: %p\n", P+2);
	printf("Valoarea lui P-1 este: %p\n", P-1);

	*P = -21;
	*(P-1000) = 100;
	

	printf("Valoarea de la adresa indicata de P este: %d\n", *P);

	free(P);

	return 0;
}
