#include <stdlib.h>
#include <stdio.h>

int* alocareVector(int n)
{
	int* v = (int*)(malloc(n * sizeof(int)));
	if (v == 0)
	{
		fprintf(stderr, "Nu s-a putut aloca memorie!\n");
		exit(EXIT_FAILURE);
	}
	return v;
}

int* citireVector(int n)
{
	int* v = alocareVector(n);
	int i;

	for (i = 0; i < n; i++)
	{
		scanf("%d", v + i);
	}

	return v;
}

void afisareVector(int* v, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", *(v+i));
	}
}
