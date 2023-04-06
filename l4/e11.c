// ora = 2

#include <stdio.h>

_Bool iesAfara(int ora)
{
	printf("Este ora %d\n", ora);
	return ora > 9 && ora < 22;
}

int main(void)
{
	int ora;

	scanf("%d", &ora);

	for(; !iesAfara(ora); ora = (ora + 1) % 24)
	{
		printf("Dorm!\n");
	}

	return 0;
}
