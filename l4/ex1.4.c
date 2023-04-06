#include<stdio.h>
#include<math.h>

/*
 * Sa se scriie algoritmul pentru rezolvarea ecuatiei de 
 * gradul 2 a*x^2 + b*x + c = 0
 * Se dau pe mediul de intrare a, b, c ce pot avea
 * orice valori reale reprezentabile.
 */

double calculDelta(double a, double b, double c);
double calculRadacina1(double a, double b, double c);
double calculRadacina2(double a, double b, double c);

int main(void)
{
	double a, b, c;
	double x1, x2;

	// Colectarea datelor
	printf("\nIntroduceti a= ");
	scanf("%lf", &a);
	printf("\nIntroduceti b= ");
	scanf("%lf", &b);
	printf("\nIntroduceti c= ");
	scanf("%lf", &c);


	if((a == b) && (b == c) && (c == 0))
	{
		printf("\nEcuatia are o infinitate de solutii");
	} // Toti coeficientii 0

	else if((a == b) && (b == 0) && (c != 0))
	{
		printf("\nEcuatia nu are solutii");
	} // Toti coeficientii lui x 0

	else if((a == 0) && (b != 0) && (c != 0))
	{
		printf("\nEcuatia este de gradul 1");
		double sol;
		sol = (double)(-c/b);
		printf("\nSi are ca solutie: %lf", sol);

	} // Coeficientul lui x^2 este 0

	else{
		// Calculam radacinile folosind functiile create
		x1 = calculRadacina1(a, b, c);
		x2 = calculRadacina2(a, b, c);

		if((x1 == x2) && (x1 == 0))
		{
			printf("\nEcuatia nu are solutii reale");
		} // Verificare corectitudine
		else
		{
			printf("\nSolutia 1 este x1 = %lf", x1);
			printf("\n\nSolutia 2 este x2 = %lf", x2);
		}

}

	return 0; //STOP	
}

double calculDelta(double a, double b, double c)
{
	return (double)(b*b - 4*a*c);
}

double calculRadacina1(double a, double b, double c)
{
	double delta;
	delta = calculDelta(a, b, c);
	// Apelam in interiorul unei functii o alta pt delta
	
	if(delta >= 0)
	{
		return (double)(-b + sqrt(delta))/2*a;
	}
	else 
	{
		return 0;
	}
}

double calculRadacina2(double a, double b, double c)
{
	double delta;
	delta = calculDelta(a, b, c);

	if(delta >= 0)
	{
		return (double)(-b -sqrt(delta))/2*a;
	}
	else
	{
		return 0;
	}
}

