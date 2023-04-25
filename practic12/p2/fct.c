#include <stdio.h>
#include <stdlib.h>
#include "fct.h"


PRODUS *citireVecProdus(int n)
{
	PRODUS *v = 0;
	int i;
	v = (PRODUS*) malloc(n*sizeof(PRODUS));
	if(v == 0)
	{
		fprintf(stderr,"Eroare la alocare");
		exit(EXIT_FAILURE);
	}	
	for(i = 0;i < n;i++)
	{
		*(v+i) = citireProdus(i);
	}
	return v;
}	
PRODUS citireProdus(int id)
{
	PRODUS prod;
	prod.id = id;
	scanf("%d",&prod.stoc);
	prod.pret = (double*) malloc(sizeof(double));
	scanf("%lf",prod.pret);
	return prod;

}
void afisareProdus(PRODUS *vec,int n)
{
	int i=0;
	for(i = 0;i < n;i++)
	{
	printf("Produsul cu ID = %d are un stoc de %d bucati si un pret de %lf lei/bucata \n",vec[i].id,vec[i].stoc,vec[i].pret[0]);
	}
}
