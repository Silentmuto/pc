#include <stdio.h>
#include <stdlib.h>
#include "fct.h"

int main()
{
	int n,m,i;
	PRODUS *v=0;
	Client lclienti[100];
	scanf("%d",&n);
	v = citireVecProdus(n);
	scanf("%d",&m);
	citireVecClient(lclienti,m); 

	printf("Magazinul are %d sortimente de produse \n",n);
	afisareProdus(v,n);
	printf("\n");
	afisareClient(lclienti,m); 
	return 0;

} 
		
