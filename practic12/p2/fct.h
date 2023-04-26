typedef struct _produs {

	unsigned id;
	int stoc;
	double *pret;
} PRODUS;

typedef struct _client {
	int id;
	int nr_sort;
	unsigned *id_prod;
	unsigned *nr_buc;
	int valtot;
} Client;

PRODUS *citireVecProdus(int n);
PRODUS citireProdus(int id);
void afisareProdus(PRODUS *vec,int n);
void citireVecClient(Client *vec,int n);
Client citireClient(int id);
unsigned *citireVecNat(int n);
void afisareClient(Client *cl,int n);
void afisareVecNat(unsigned *vec,int n);
