// Ce afiseaza programul?

#include <stdio.h>

int main(void)
{
	float a = 5, b = 4;
	switch(a + b)
	{
		case 9:
			printf("hello\n");
			break;
		default:
			printf("bonjour\n");
			break;
	}

	return 0;
}
