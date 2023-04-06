// Ce afiseaza programul?

#include <stdio.h>

int operatie(int a, int b)
{
	return a %  b + 1;
}

int main(void)
{
	switch(operatie(4, 5) + 1)
	{
		case 7:
			printf("hello\n");
			break;
		default:
			printf("bonjour\n");
			break;
	}

	return 0;
}
