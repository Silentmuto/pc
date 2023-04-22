#include "fct.h"
#include <stdio.h>
#include <stdlib.h>


int* citireVector(int *RP,int n)
{	int i=0;
	RP = (int*)malloc(n*sizeof(int));
	//	RP = (int*)calloc(n,sizeof(int));
	//	RP = (int*)realloc(RP,sizeof(int));
	//	RP = (int*)memset(RP,0,n*sizeof(int));
	if(RP == 0)
	{
		fprintf(stderr,"Eroare la alocare");
		exit(EXIT_FAILURE);
	}

		for(i = 0;i < n;i++)
		{
			scanf("%d",RP+i);
		}
	return RP;
}
void afisareVector(int* RP,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(RP+i));
	}
	printf("\n");

}
 void citireStruct(Spectacol *B,int n,int *RP)
{
		int i=0;
		for(i = 0;i < n;i++)
		{
			B[i].nr_reprez = *(RP + i);
			B[i].bilete = (int*)malloc((*(RP + i)) * sizeof(int));
		}
		for(i = 0;i < n;i++)
		{
			int j = 0;
			printf("Introduceti numarul de bilete pt piesa %d \n",i+1);
			for(j = 0;j <B[i].nr_reprez;j++)
			{
				scanf("%d",&B[i].bilete[j]);
			}
		}
} 
void afisareStruct(Spectacol *B,int n)
{
	int i=0;
	int j=0;
	for(i = 0;i < n;i++)
	{
		printf("Piesa %d \n",i+1);	
		for(j = 0;j < B[i].nr_reprez;j++)
		{
			printf("%d ",B[i].bilete[j]);
		}
		printf("\n");
	}
}
Spectacol* sumaCategorie(Spectacol *B,int n,int pret)
{
	Spectacol *Sum=0;
	Sum = (Spectacol*)malloc(n*sizeof(Spectacol));
	if(Sum == 0)
	{
		fprintf(stderr,"Eroare");
		exit(EXIT_FAILURE);
	}
	int i=0,j=0;
	for(i = 0;i < n;i++)
	{
		(Sum+i)->nr_reprez = B[i].nr_reprez;
		(Sum+i)->bilete = (int*) malloc(n*sizeof(int));
		for(j = 0;j < (Sum+i)->nr_reprez;j++)
		{
			(Sum+i)->bilete[j] = pret* B[i].bilete[j];
		}
	}
	return Sum;
}
