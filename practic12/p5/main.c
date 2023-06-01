#include "fct.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	parcare *parc=0;
	int nr_parc = 0;
	unsigned *v1,*v2;
	int p[3];
	printf("n= ");
	scanf("%u",&n);
	parc = citireStruct(n);
	afisareStruct(parc,n);
	for(i = 0;i < 3;i++)
	{
		scanf("%d",&nr_parc);
		v1 = citireVector(nr_parc);
		printf("Ati introdus: ");
		afisareVector(v1,nr_parc);
		v2 = citireVector(nr_parc);
		printf(" Ati introdus: ");
		afisareVector(v2,nr_parc);
		p[i] = nr_parc;
		free(v1);
		free(v2);
	}
	p[2] = p[2];
	return 0;
}

