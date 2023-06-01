#include "fct.h"
#include <stdio.h>



int main()
{
	int dim_mat;
	unsigned **a=0;
	TRASEU t1,t2;
	printf("Introduceti dimensiunea matricei \n");
	scanf("%d",&dim_mat);
	t1.ltraseu = dim_mat;
	t2.ltraseu = dim_mat;
	a = citireMatrice(a,dim_mat);
	afisareMatrice(a,dim_mat);
	int nr_tras;
	scanf("%d",&nr_tras);
	citireVector(t1.vec,dim_mat);
	citireVector(t2.vec,dim_mat);
	printf("Sunt stabilite %d trasee \n",nr_tras);
	afisareVector(t1.vec,dim_mat);
	afisareVector(t2.vec,dim_mat);		
	return 0;
}
