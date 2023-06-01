#include <stdio.h>
#include "fct.h"
#include <stdlib.h>



int main()
{
	
	asociatie *asoc = 0;
	asoc = citireAsociatie(asoc);
	afisareAsociatie(asoc);
	int nr_cl;
	scanf("%d",&nr_cl);
	client cl[100];
	 citireVecClient(cl,nr_cl,asoc->nr_tm);
	afisareClient(cl,nr_cl,asoc->nr_tm);
	valTotalClient(cl,asoc,nr_cl);
	afisareTotalClient(cl,nr_cl);
	printf("Valoarea totala a comenzilor este %.2lf \n",valTotalComenzi(cl,nr_cl));
	int *total = 0;
	total = cantTotal(asoc,cl,nr_cl);
	int *ramas;
	ramas = cantRamas(asoc,total);
	double *val;
	val = valPerMiere(asoc,total);
	int at=0;
	at = totalAsoc(asoc);
	int i;
	for(i = 0;i < asoc->nr_tm;i++)
	{
		printf("Pentru tipul %d de miere trebuie sa se incaseze %.2lf lei \n",i,val[i]);
	}
	for(i = 0;i < asoc->nr_tm;i++)
	{
		printf("Pentru tipul %d de miere reman nevandute %d kg \n",i,ramas[i]);
	}
	printf("Asociatia a avut la vanzare %d kg",at);
	
	return 0;
}
	
