#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARG_PRELUCRARE_1	1
#define ARG_PRELUCRARE_2	2
#define ARG_AFISARE_FISIER	3
#define ARG_AFISARE_AJUTOR	4
#define ARG_NUME_FISIER		5

int determinareTipArgument(char* s)
{
	if (strcmp(s, "-p") == 0) {
		return ARG_PRELUCRARE_1;
	}
	if (strcmp(s, "-s") == 0) {
		return ARG_PRELUCRARE_2;
	}
	if (strcmp(s, "-m") == 0) {
		return ARG_AFISARE_FISIER;
	}
	if (strcmp(s, "-h") == 0) {
		return ARG_AFISARE_AJUTOR;
	}
	return ARG_NUME_FISIER;
}

void prelucrare1()
{
	printf("Prelucrarea 1\n");
}

void prelucrare2()
{
	printf("Prelucrarea 2\n");
}

void afisareAjutor()
{
	printf("Programul suporta urmatoarele operatii: \n");
	printf("-p -s -h -m \n");
}

void afisareFisier(char* numeFisier)
{
	char c;
	FILE* f = fopen(numeFisier, "r");

	if (f == 0)
	{
		printf("Nu am putut deschide fisierul.\n");
		return;
	}

	while ((c = getc(f)) != EOF)
	{
		printf("%c", c);
	}

	fclose(f);
}

int main(int argc, char** argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		switch(determinareTipArgument(argv[i])) 
		{
			case ARG_PRELUCRARE_1:
				prelucrare1();
				break;
			case ARG_PRELUCRARE_2:
				prelucrare2();
				break;
			case ARG_AFISARE_AJUTOR:
				afisareAjutor();
				break;
			case ARG_AFISARE_FISIER:
				afisareFisier(argv[i+1]);
				i++;
				break;
			default:
				printf("Program apelat gresit.\n");
				break;
		}
	}	

	return 0;
}
