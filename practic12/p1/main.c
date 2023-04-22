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
	free(RP);
	return 0;
}
