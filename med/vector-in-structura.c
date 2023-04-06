#include <stdio.h>

struct _picior
{
	float lungime;
	int culoare;
};
typedef struct _picior picior;


struct _caine
{
	int varsta;
	picior fataStanga, fataDreapta, spateStanga, spateDreapta;
	picior* piciorMutant;
};
typedef struct _caine caine;

_Bool esteSchilod(caine* c)
{
	return (c->fataStanga.lungime != c->fataDreapta.lungime
			|| c->spateStanga.lungime != c->spateDreapta.lungime
			|| c->fataStanga.lungime != c->spateDreapta.lungime);
}

int main(void)
{
	caine *C = (caine*)malloc(sizeof(caine));
	C->piciorMutant = (picior*)malloc(sizeof(picior));

	scanf("%d", &C->varsta);
	scanf("%f%d", &C->fataStanga.lungime, &C->fataStanga.culoare);
	scanf("%f%d", &C->fataDreapta.lungime, &C->fataDreapta.culoare);
	scanf("%f%d", &C->spateStanga.lungime, &C->spateStanga.culoare);
	scanf("%f%d", &C->spateDreapta.lungime, &C->spateDreapta.culoare);

	scanf("%f%d", &C->piciorMutant->lungime, &C->piciorMutant->culoare);

	if (esteSchilod(C))
	{
		printf(":-<");
	}


	free(C->piciorMutant);
	free(C);

	return 0;
}


