struct _spectacol {
	unsigned int  nr_reprez;
	int *bilete;
};
typedef struct _spectacol Spectacol;

int* citireVector(int *RP,int n);
void afisareVector(int *RP,int n);
void citireStruct(Spectacol *B,int n,int *RP);
void afisareStruct(Spectacol *B,int n);
Spectacol* sumaCategorie(Spectacol *B,int n,int pret);

