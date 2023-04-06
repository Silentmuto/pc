// Ce se afiseaza?
// cand x = 5, 9 

#include <stdio.h>

int functieInutila()
{
	printf("sunt inutil\n");
	return 1;
}

int main(void)
{
	int x;

	scanf("%d", &x);

	do
	{
		printf("%d \n", x);
		x--;
	} while (x/5 || functieInutila());

	return 0;
}

