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
 Spectacol* citireStruct(Spectacol *B,int n,int *RP)
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
		return B;
} 
void afisareStruct(Spectacol *B,int n)
{
	int i=0;
	int j=0;
	for(i = 0;i < n;i++)
	{
		printf("Piesa %d a avut urmatorul numar de bilete \n",i+1);	
		for(j = 0;j < B[i].nr_reprez;j++)
		{
			printf("%d ",B[i].bilete[j]);
		}
		printf("\n");
	}
}
