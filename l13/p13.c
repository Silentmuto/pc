#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void citireNumeFisier(char* nume)
{
	// daca este un singur cuvant
	// scanf("%s", nume);
	//

	// mai general...
	fgets(nume, 100, stdin);

	// eliminam caracterul '\n' din numele fisierului
	nume[strlen(nume)-1] = 0;
}

void verificareFisier(FILE* f)
{
	if (f == 0)
	{
		fprintf(stderr, "Nu s-a putut deschide fisierul.\n");
		exit(EXIT_FAILURE);
	}
}

char convertesteLaMinuscula(char c)
{
	if ('A' <= c && c <= 'Z') {
		return c + ' ';
	}
	return c;
}

char convertesteLaMajuscula(char c)
{
	if ('a' <= c && c <= 'z') {
		return c - ' ';
	}
	return c;
}

int main(void)
{
	char numeFisier[20];
	char c;
	int raspuns;

	citireNumeFisier(numeFisier);

	FILE* fin = fopen(numeFisier, "r");
	verificareFisier(fin);

	printf("Mari = 1; mici = 0?");
	scanf("%d", &raspuns);

	while((c = getc(fin)) != EOF)
	{
		if (raspuns == 0)
		{
			printf("%c", convertesteLaMinuscula(c));
		}
		else
		{
			printf("%c", convertesteLaMajuscula(c));
		}
	}	

	fclose(fin);
	return 0;

}
