#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	switch(x) {
		case 1:
			printf("1");
			break;
		default:
			printf("default!");
			break;
		case -2:
			printf("-2\n");
		case 2:
			printf("2");
			break;
	}

	return 0;
}
