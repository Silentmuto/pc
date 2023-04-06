#include <stdio.h>

void citireVector(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void dublareVector(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = a[i] * 2;
	}
}

int sumaVector(int v[], int n)
{
	int i, s = 0;
	for (i = 0; i < n; i++)
	{
		s = s + v[i];
	}
	return s;
}

void adunareVectori(int a[], int b[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = a[i] + b[i];
	}
}

void adunareVectori2(int a[], int b[], int c[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
	}
}

void afisareVector(int a[], int n)
{
	int i;
	for (i = 0; i < n;i ++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void)
{
	int n;
	int v[10], w[10], z[10];

	scanf("%d", &n);
	citireVector(v, n);
	citireVector(w, n);

	//dublareVector(v, n);
	
	printf("Suma elementelor din v este: %d\n", sumaVector(v, n));

	//adunareVectori(v, w, n);
	adunareVectori2(v, w, z, n);

	afisareVector(v, n);
	afisareVector(w, n);
	afisareVector(z, n);

	return 0;
}
