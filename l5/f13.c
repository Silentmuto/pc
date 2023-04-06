// Ce se afiseaza?

#include <stdio.h>

int main(void)
{
	int x = 10;

	switch(x)
	{
		case 5+4:
			printf("A\n");
			break;
		case 3+7:
			printf("B\n");
		case 1-2:
			printf("C\n");
			break;
		default:
			printf("default\n");
			break;
	}

	return 0;
}
