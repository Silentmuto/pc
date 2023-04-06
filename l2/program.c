#include <stdio.h>
#include <math.h>

int suma(int a, int b);
void afisareMesajSuma(int s);
float mediaGeometrica(int x, int y);
void afisareMesajMedie(float media);

int main(void)
{
	// declararea variabilelor
	int a, b, s;
	float mg;

	// afisarea unui text
	printf("Introduceti a si b:");

	// citirea variabilelor
	scanf("%d%d", &a, &b);

	s = suma(a, b);
	mg = mediaGeometrica(a, b);

	// afisare
	afisareMesajSuma(s);
	afisareMesajMedie(mg);

	return 0;
}

int suma(int a, int b)
{
	return a + b;
}

void afisareMesajSuma(int s)
{
	printf("Suma este %d\n", s);
}

void afisareMesajMedie(float media)
{
	printf("Media geometrica este %f\n", media);
}

float mediaGeometrica(int x, int y)
{
	return sqrt(x*y);
}
