#include <stdio.h>

int main(void)
{
	int i;
	for (i = 3; i <= 10; i++)
	{
		printf("hop!\n");
		if (i % 3 == 2) 
		{
			continue;
		}
		printf("sar gardul\n");
		if (i % 8 == 1)
		{
			break;
		}
	}
	return 0;
}
