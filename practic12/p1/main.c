#include <stdio.h>
#include "fct.h"
#include <stdlib.h>

int main()
{
	int n=0;
	printf("Introduceti n \n");
	scanf("%d",&n);
	int *RP = 0;
	RP = citireVector(RP,n);
	afisareVector(RP,n);
	printf("Introduceti p1 si p2 \n");
	int p1=0,p2=0;
	scanf("%d%d",&p1,&p2);
	Spectacol B1[n],B2[n];
	printf("Introduceti biletele de categoria 1 \n");
	citireStruct(B1,n,RP);
	printf("Introduceti biletele de categoria 2 \n");
	citireStruct(B2,n,RP);
	printf("Prima categorie de bilete \n");	
afisareStruct(B1,n);
	printf("A doua categorie de bilete \n");
	Spectacol* sum1=0,*sum2=0;
	sum1 = sumaCategorie(B1,n,p1);
	sum2 = sumaCategorie(B2,n,p2);
	printf("Incasari prima categorie \n");
	afisareStruct(sum1,n);
	printf("Incasari a doua categorie \n");
	afisareStruct(sum2,n);
	Spectacol *sump=0;
	sump = sumaStructuri(sum1,sum2,n);	
	int k;
	afisareSumSpec(sump,n);
	afisareSumTot(sumaTotala(sum1,sum2,n));
	dealocareStruct(sump,n);
	sump = 0;
	dealocareStruct(sum2,n);
	sum2 = 0;
	dealocareStruct(sum1,n);
	sum1 = 0;
	for(k = 0;k <  n;k++)
	{	
		free(B1[k].bilete);
		B1[k].bilete = 0;
		free(B2[k].bilete);
		B2[k].bilete = 0;
	}
	free(RP);
	RP = 0;
	return 0;
}
