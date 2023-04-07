#include <stdio.h>

void citireVectorInt(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
}

void citireVectorFloat(float v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%f", &v[i]);
	}
}

void afisareVectorInt(int v[], int n)
{
	int i;
	printf("( ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
	printf(") ");
}

void afisareVectorFloat(float v[], int n)
{
	int i;
	printf("( ");
	for (i = 0; i < n; i++)
	{
		printf("%.2f ", v[i]);
	}
	printf(") ");
}

void sumaVectoriInt(int* a, int *b, int *c, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
	}
}

void sumaVectoriFloat(float* a, float* b, float* c, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
	}
}

void inmultireScalara(int* a, float* b, float* c, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		c[i] = a[i] * b[i];
	}
}

float sumaTotalVector(float* v, int n)
{
	int i;
        float s = 0;
	for (i = 0; i < n; i++)
	{
		s += v[i];
	}
	return s;
}
