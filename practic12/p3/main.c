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
	return 0;
}
	
