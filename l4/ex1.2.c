#include<stdio.h>
#include<math.h>

float functie(float x);

int main(void)
{
	float x, fx;

	printf("\nIntroduceti valoarea lui x: ");
	scanf("%f", &x);

	fx = functie(x);

	printf("\nFunctia este: %f\n", fx);

	return 0;
}

float functie(float x)
{
	if(x <= 2)
	{
		return x*x + 3*x + 5;
	}
	else if((x > 2) && (x < 8))
	{
		return 3*x;
	}
	else
	{
		return exp(x) + 2;
	}
}
