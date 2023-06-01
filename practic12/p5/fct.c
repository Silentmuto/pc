#include "fct.h"
#include <stdio.h>
#include <stdlib.h>



unsigned *citireVector(int dim)
{
	unsigned *v=0;
	int i;
	v = (unsigned*)malloc(dim * sizeof(unsigned));
	if(v == 0)
	{
		fprintf(stderr,"Eroare la alocare \n");
		exit(EXIT_FAILURE);
	}
	for(i = 0;i < dim;i++)
	{
		scanf("%u",(v+i));
	}
	return v;
}

void afisareVector(unsigned *v,int dim)
{
	int i;
	for(i = 0;i < dim;i++)
	{
		printf("%u ",*(v+i));
	}
	printf("\n");
}
parcare* citireStruct(int dim)
{
	parcare *str=0;
	int i;
	str = (parcare*)malloc(dim * sizeof(parcare));
	if(!str)
	{
		fprintf(stderr,"Eroare la alocare \n");
		exit(EXIT_FAILURE);
	}
	for(i = 0;i< dim;i++)
	{
		str[i].id = i;
		printf("nr locuri pt parcarea %d \n",i);
		scanf("%d",&str[i].nr_locuri);
		printf("pret \n");
		scanf("%u",&str[i].pret);
	}
	return str;
}

void afisareStruct(parcare* str,int dim)
{
	int i;
	for(i = 0;i < dim;i++)
	{
		printf("Parcarea %d are %d locuri de parcare si fiecare loc costa %u lei pe ora \n",str[i].id,str[i].nr_locuri,str[i].pret);
	}
}
