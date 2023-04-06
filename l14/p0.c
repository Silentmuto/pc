#include <stdio.h>

int main(int argc, char** argv, char** env)
{
	int i;
	printf("Numarul de argumente este %d\n", argc);

	printf("Argumentele sunt:\n\n");

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	printf("\nVariabilele de mediu sunt:\n");

	for (i = 0; env[i]; i++)
	{
		printf("%s\n", env[i]);
	}

	return 0;
}
