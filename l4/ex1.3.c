#include<stdio.h>

float calculator(float a, float b, int x);

int main(void)
{
	float a, b, rez;
	int prove;

	printf("valoarea lui a: ");
	scanf("%f", &a);
	printf("valoarea lui b: ");
	scanf("%f", &b);

	printf("Operatii posibile:\n");
	printf("1 ---> Adunare\n");
	printf("2 ---> Scadere\n");
	printf("3 ---> Inmultire\n");
	printf("4 ---> Impartire\n\n");
	printf("Introduceti nr operatiei dorite: ");
	
	scanf("%d", &prove);

	rez = calculator(a, b, prove);
	printf("\nRezulat: %f\n", rez);

	return 0;
}

float calculator(float a, float b, int x)
{
	switch(x)
	{
		case 1:
			return a + b;
			break;
		case 2:
			return a - b;
			break;
		case 3:
			return a * b;
			break;
		case 4:
			return a / b;
			break;
		default:
			return 0;
			break;
	}
}
