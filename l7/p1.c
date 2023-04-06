#include <stdio.h>
#include <stdlib.h>
#include "functii.h"

int main(void)
{
	int* v, n;

	scanf("%d", &n);

	v = citireVector(n);

	afisareVector(v, n);

	free(v);
	v = 0;

	return 0;
}
