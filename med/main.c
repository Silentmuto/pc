#include <stdio.h>
#include <stdlib.h>

void verificare(void *f)
{
	if(f==0)
	{
		fprintf(stderr,"eroare");
		exit(EXIT_FAILURE);
	}
}

void afisareVector(FILE *f, int *v, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fprintf(f,"%d ",*(v+i));
	}
}

int main()
{
	int n,i,done=0,aux;
	FILE *fi=fopen("in","r");
	verificare(fi);
	FILE *fo=fopen("out","w");
	verificare(fo);

	printf("numarul de numere din tablou: ");
	scanf("%d",&n);
	
	int *tablou=(int*)malloc(n*sizeof(int));
	verificare(tablou);
	for(i=0;i<n;i++)
	{
		fscanf(fi,"%d",tablou+i);
	}

	while(!done)
	{
		done=1;
		for(i=1;i<n;i++)
		{
			if(*(tablou+i-1)>*(tablou+i))
			{
				done=0;
				aux = *(tablou+i-1);
				*(tablou+i-1) = *(tablou+i);
				*(tablou+i) = aux;
			}
		}
	}

	

	afisareVector(fo,tablou,n);

	fclose(fi);
	fi=0;
	fclose(fo);
	fo=0;

	return 0;
}
