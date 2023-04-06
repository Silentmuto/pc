#include <stdio.h>
#include <stdbool.h>

#define SIR_STRICT_CRESCATOR 	6
#define SIR_CRESCATOR		5
#define SIR_STRICT_DESCRESCATOR	2
#define SIR_DESCRESCATOR	3
#define SIR_CONSTANT		4
#define SIR_OARECARE		1


int tip_sir(int n)
{
	int xp, xc, i;
	_Bool strict_crescator = true,
	      crescator = true,
	      strict_descrescator = true,
	      descrescator = true,
	      constant = true;

	scanf("%d", &xc);

	for (i = 1; i < n; i++) 
	{
		xp = xc;
		scanf("%d", &xc);
		if (xc < xp)
		{
			strict_crescator = false;
			crescator = false;
			constant = false;
		}
		else if (xc > xp)
		{
			strict_descrescator = false;
			descrescator = false;
			constant = false;
		}
		else if (xc == xp)
		{
			strict_crescator = false;
			strict_descrescator = false;
		}
	}
	
	if (strict_crescator)
	{
		return SIR_STRICT_CRESCATOR;
	}
	if (strict_descrescator)
	{
		return SIR_STRICT_DESCRESCATOR;
	}
	if (constant)
	{
		return SIR_CONSTANT;
	}
	if (crescator)
	{
		return SIR_CRESCATOR;
	}
	if (descrescator)
	{
		return SIR_DESCRESCATOR;
	}
	return SIR_OARECARE;
}

void afisare_tip_sir(int tip)
{
	switch(tip) 
	{
		case SIR_STRICT_DESCRESCATOR:
			printf("sir strict descrescator\n");
			break;
		case SIR_STRICT_CRESCATOR:
			printf("sir strict crescator\n");
			break;
		case SIR_DESCRESCATOR:
			printf("sir descrescator\n");
			break;
		case SIR_CRESCATOR:
			printf("sir crescator\n");
			break;
		case SIR_CONSTANT:
			printf("sir constant\n");
			break;
		default:
			printf("sir oarecare\n");
			break;
	}
}

int main(void)
{
	int n, raspuns;
	do {
		scanf("%d", &n);
		afisare_tip_sir(tip_sir(n));
		
		printf("Scrieti 1 pentru a relua\n");
		scanf("%d", &raspuns);
	} while (raspuns == 1);
	
	return 0;
}
