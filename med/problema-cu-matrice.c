#include <stdio.h>
#include <stdlib.h>

void validarePointer(void* p)
{
	if (p == 0)
	{
		fprintf(stderr, "nu am putut aloca\n");
		exit(EXIT_FAILURE);
	}
}

int** alocare2d(int r, int c)
{
	int i;

	int** T = (int**)malloc(sizeof(int*) * r);
	validarePointer(T);

	for (i = 0; i < r; i++)
	{
		T[i] = (int*)malloc(sizeof(int) * c);
		validarePointer(T[i]);
	}

	return T;
}

void dealocare2d(int** T, int r)
{
	int i;
	
	for (i = 0; i < r; i++)
	{
		free(T[i]);
		T[i] = 0;
	}
	free(T);
}

int** citireMatrice(int r, int c)
{
	int i, j;
	int** T = alocare2d(r, c);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &T[i][j]);
		}
	}

	return T;
}

int** clonareMatrice(int** T, int r, int c)
{
	int i, j;
	int** U = alocare2d(r, c);

	for (i = 0; i < r; i ++)
	{
		for (j = 0; j < c; j++)
		{
			U[i][j] = T[i][j];
		}
	}

	return U;
}

int sumaElementelorDinMatrice(int** T, int r, int c)
{
	int s = 0;
	int i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			s += T[i][j];
		}
	}
	return s;
}

void afisareMatrice(int** T, int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", T[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int R, C;
	int** A, **B;

	scanf("%d%d", &R, &C);
	A = citireMatrice(R, C);
	B = clonareMatrice(A, R, C);
	B[1][1] = sumaElementelorDinMatrice(B, R, C);

	afisareMatrice(B, R, C);

	dealocare2d(A, R);
	dealocare2d(B, R);

	return 0;
}


