#include "fct.h"
#include <stdio.h>
#include <stdlib.h>


unsigned **alocareMatrice(int dim)
{
	unsigned  **mat=0;
	int i;
	mat = (unsigned **)malloc(dim * sizeof(unsigned*));
	if(!mat)
	{
	fprintf(stderr,"Eroare la alocare \n");
	exit(EXIT_FAILURE);
	}
	for(i = 0;i<dim;i++)
	{
	mat[i] = (unsigned*)malloc(dim * sizeof(unsigned));
	}
	return mat;
}

unsigned **citireMatrice(unsigned**a,int dim)
{
	int i,j;
	a = alocareMatrice(dim);
	for(i = 0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			scanf("%u",*(a+i)+j);
		}
	}
	return a;
}
void afisareMatrice(unsigned **a,int dim)
{
	int i,j;
	for(i = 0;i<dim;i++)
	{
		for(j = 0;j< dim;j++)
		{
			if(i == j)
			{
				printf("x ");
			}
			else
			{
				printf("%u ",*( *(a+i) + j));
			}
		}
		printf("\n");
	}
}	
void citireVector(unsigned vec[],int dim)
{
	int i;
	for(i = 0;i < dim;i++)
		{
			scanf("%u", &vec[i]);
		}
}
void afisareVector(unsigned vec[],int dim)
{
	int i;
	for(i = 0;i < dim;i++)
	{
		printf("O%u-",vec[i]);
	}
	printf("O%u",vec[0]);
	printf("\n");
}
