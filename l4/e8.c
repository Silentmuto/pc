// Ce se afiseaza pentru numarul citit 21?

#include <stdio.h>

int impartitLaTrei(int x)
{
	return x / 3;
}

int main(void)
{
	int x;
	int i;

	scanf("%d", &x);

	for (i = x; i >  0; i = impartitLaTrei(i))
	{
		printf("%d ", i + 2);
	}

	return 0;
}
