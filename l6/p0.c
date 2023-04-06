#include <stdio.h>

int main(void)
{
	int v[100];

	v[0] = 2;
	v[1] = 7;

	printf("Adresa la care incep valorile vectorului v: %p\n", v);
	printf("Valoarea lui v[0]: %d\n", v[0]);
	printf("Adresa la care se gaseste v[0]: %p\n", &v[0]);
	printf("Valoarea lui v[1]: %d\n", v[1]);
	printf("Adresa la care se gaseste v[1]: %p\n", &v[1]);
	printf("Adresa la care se gaseste v[2]: %p\n", &v[2]);
	printf("Adresa la care se gaseste v[3]: %p\n", &v[3]);

	return 0;
}
