typedef struct _produs {

	unsigned id;
	int stoc;
	double *pret;
} PRODUS;

typedef struct _client {
	int id;
	int nr_sort;
	int *id_prod;
	int *nr_buc;
	int valtot;
} Client;

PRODUS *citireVecProdus(int n);
PRODUS citireProdus(int id);
void afisareProdus(PRODUS *vec,int n);
void citireVecClient(Client *vec,int n);
Client citireClient(int id);
unsigned *citireVecnat(int n);
void afisareClient(Client *cl);
