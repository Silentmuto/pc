#include <stdio.h>
#include <stdlib.h>
#include "fct.h"


asociatie *citireAsociatie(asociatie *asoc)
{
	int n;
	printf("Introduceti nr de apicultori \n");
	scanf("%d",&n);
	asoc = (asociatie*) malloc(sizeof(asociatie));
	asoc->nr_mem = n;
	printf("Introdiceti tipuri de miere \n");
	scanf("%d",&n);
	asoc->nr_tm = n;
	asoc->vmiere = 0;
	asoc->vmiere = (miere*)malloc(asoc->nr_tm * sizeof(miere));
	if(!asoc->vmiere)
	{
		fprintf(stderr,"Eroare la alocare ");
		exit(EXIT_FAILURE);
	}
	asoc->vmiere = citireVecMiere(asoc->nr_tm);
	return asoc;
}
miere *citireVecMiere(int cant)
{
	miere *vec=0;
	vec = (miere*) malloc(cant * sizeof(miere));
	if(vec == 0)
	{
	fprintf(stderr,"Eroare la alocare");
	exit(EXIT_FAILURE);
	}
	int i;
	for(i = 0;i < cant;i++)
	{	printf("Tipul %d de miere \n",i);
		vec[i] = citireMiere();
	}
	return vec;
}
	
miere citireMiere()
{
	miere m;
	printf("Cantitate miere \n");
	scanf("%d",&m.cant);
	printf("Pret per kg \n");
	scanf("%lf",&m.pret);
	return m;
}
void afisareAsociatie(asociatie *asoc)
{
	printf("Asociatia are %d membri \n",asoc->nr_mem);
	printf("Asociatia are pentru vanzare %d tipuri de miere : \n",asoc->nr_tm);
	int i;
	for(i = 0;i < asoc->nr_tm;i++)
	{
		printf("Tipul %d: cantitate - %d kg,pret - %.2lf lei/kg \n",i,asoc->vmiere[i].cant,asoc->vmiere[i].pret);
	}
}
client *citireVecClient(client *cl,int n,int tm)
{
	int i;
	for(i=0;i<n;i++)
	{	
		printf("Cantitatile comandate de clientul %d \n",i+1);
		cl[i] = citireClient(tm);
	}
	return cl;
}
client citireClient(int tm)
{
	client cl;
	cl.cant_miere = 0;
	cl.cant_miere = citireVecInt(tm);
	return cl;
}
int *citireVecInt(int tm)
{
	int *vec=0;
	vec = (int*)malloc(tm*sizeof(int));
	if(vec==0)
	{
		fprintf(stderr,"Eroare la alocare \n");
		exit(EXIT_FAILURE);
	}
	int i;
	for(i = 0;i  < tm;i++)
	{
	scanf("%d",&vec[i]);
	}
	return vec;
}
void afisareClient(client *cl,int nrc,int tm)
{
	int i,j;
	printf("Comenzile clientilor \n");
	for(i = 0;i < nrc;i++)
	{
		printf("Clientul %d a comandat ",i+1);
		for(j = 0;j < tm;j++)
		{
		printf(" %d ",cl[i].cant_miere[j]);
		}
		printf("\n");
	}
}
