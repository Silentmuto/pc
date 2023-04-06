#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, eps, xp, xc;
	int p;

	scanf("%f%d%f", &a, &p, &eps);

	xc = a/p;
	do
	{
		xp = xc;
		xc = (1./p)*((p-1)*xp + a/pow(xp, p-1));
	} while (fabs(xc-xp) >= eps);

	printf("%.10f\n", xc);

	return 0;
}
