

struct _miere {
	int cant;
	double pret;
};
typedef struct _miere miere;
struct _asociatie {
	int nr_mem,nr_tm;
	miere *vmiere;
};
typedef struct _asociatie asociatie;
struct _client {
	double valtot;
	int *cant_miere;
};
typedef struct _client client;


asociatie *citireAsociatie(asociatie *asoc);
void afisareAsociatie(asociatie *asoc);
miere *citireVecMiere(int cant);
miere citireMiere();
client *citireVecClient(client *cl,int n,int tm);
client citireClient();
int *citireVecInt(int dim);
void afisareClient(client *cl,int nrc,int tm);
void valTotalClient(client *cl,asociatie *asoc,int nr_cl);
void afisareTotalClient(client *cl,int nr_cl);
double valTotalComenzi(client *cl,int nr_cl);
int* cantRamas(asociatie *asoc,int *total);
int *cantTotal(asociatie *asoc,client *cl,int nr_cl);
double* valPerMiere(asociatie *asoc,int *total);
int totalAsoc(asociatie *asoc);
