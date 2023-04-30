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
	double valtot;
} Client;

PRODUS *citireVecProdus(int n);
PRODUS citireProdus(int id);
void afisareProdus(PRODUS *vec,int n);
void citireVecClient(Client *vec,int n);
Client citireClient(int id);
unsigned *citireVecNat(int n);
void afisareClient(Client *cl,int n);
void afisareVecNat(unsigned *vec,int n);
Client ValComanda(Client cl,PRODUS *prod);
void afisareValComanda(Client *cl,int m);
double ValTotal(Client *cl,int m);
PRODUS  *CalcStocuri(PRODUS *prod,Client *cl,int m);
void Dealocare(PRODUS *prod,Client *cl,int n,int m);

