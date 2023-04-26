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
void citireVecClient(Client *vec,int n)
{
	int i;
	for(i = 0;i< n;i++)
	{
	vec[i] = citireClient(i);
	}
	
}
Client citireClient(int id)
{
	Client cli;
	cli.id_prod = 0;
	cli.nr_buc = 0;
	cli.id = id;
	scanf("%d",&cli.nr_sort);
	cli.id_prod = (unsigned*) malloc(cli.nr_sort * sizeof(unsigned));
	cli.nr_buc = (unsigned*) malloc(cli.nr_sort * sizeof(unsigned));
	if( !cli.id_prod || !cli.nr_buc)
	{
	fprintf(stderr,"Eroare la alocare");
	exit(EXIT_FAILURE);
	}
	cli.id_prod = citireVecNat(cli.nr_sort);
	cli.nr_buc = citireVecNat(cli.nr_sort);
	return cli;
}
unsigned* citireVecNat(int n)
{
	int i;
	unsigned *vec = 0;
	vec = (unsigned*)malloc(n*sizeof(unsigned));
	for(i = 0;i < n;i++)
	{
	scanf("%u",&vec[i]);
	}
	return vec;
}
void afisareClient(Client *cl,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
	printf("Clientul %d a comandat %d sortimente de produse avand codurile ",cl[i].id,cl[i].nr_sort);
	afisareVecNat(cl[i].id_prod,cl[i].nr_sort);
	printf(" si cantitatile ");
	afisareVecNat(cl[i].nr_buc,cl[i].nr_sort);
	printf("\n");
	}
}
void afisareVecNat(unsigned *vec,int n)
{
	int i;
	printf("(");
	for(i = 0;i < n;i++)
{
	printf("%d,",vec[i]);
}	
	printf(")");
}	

	
