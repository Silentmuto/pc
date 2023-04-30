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
	for(i = 0;i < m;i++)
	{
		lclienti[i] = ValComanda(lclienti[i],v);
	}
	afisareValComanda(lclienti,m);
	printf("Valoarea totala a comenilor este de %.2lf lei \n",ValTotal(lclienti,m));
	v = CalcStocuri(v,lclienti,m);
	afisareProdus(v,n);
	        
      Dealocare(v,lclienti,n,m);
	prod = 0;
	 
	return 0;

} 
		
