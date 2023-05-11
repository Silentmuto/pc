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
void valTotalClient(client *cl,asociatie *asoc,int nr_cl)
{
	int i,j;
	for(i = 0;i < nr_cl;i++)
	{
		for(j = 0;j <asoc->nr_tm;j++)
		{
			cl[i].valtot += (double)(cl[i].cant_miere[j]) * asoc->vmiere[j].pret;
		}
	}
}
void afisareTotalClient(client *cl,int nr_cl)
{
	int i;
	for(i=0;i<nr_cl;i++)
	{
		printf("Clientul %d a avut o comanda in valoare de %lf \n",i+1,cl[i].valtot);
	}
}
double valTotalComenzi(client *cl,int nr_cl)
{
	double total = 0;
	int i;
	for(i = 0;i< nr_cl;i++)
	{
		total += cl[i].valtot;
	}
	return total;
}
int *cantTotal(asociatie *asoc,client *cl,int nr_cl)
{
	int *total = 0;
	total = (int*)malloc(asoc->nr_tm * sizeof(int));
	int i,j;
	for(i = 0;i < asoc->nr_tm;i++)
	{
		for(j = 0;j < nr_cl;j++)
		{
			total[i] += cl[j].cant_miere[i];
		}
	}
	return total;
}
int *cantRamas(asociatie *asoc,int *total)
{
	int i;
	int *ram = 0;
	ram = (int*)malloc(asoc->nr_tm * sizeof(int));
	for(i = 0;i < asoc->nr_tm;i++)
	{
		ram[i] = asoc->vmiere[i].cant - total[i];
	}
	return ram;	
}
double *valPerMiere(asociatie *asoc,int *total)
{
	double *val=0;
	val = (double*)malloc(asoc->nr_tm * sizeof(double));
	int i;
	for(i = 0;i < asoc->nr_tm;i++)
	{
		val[i] = (asoc->vmiere[i].pret) * ((double) total[i]);
	}
	return val;	
}
int totalAsoc(asociatie *asoc)
{
	int i,tot=0;
	for(i = 0;i < asoc->nr_tm;i++)
	{
	tot += asoc->vmiere[i].cant;
	}
	return tot;
}
