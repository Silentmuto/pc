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
Spectacol* sumaStructuri(Spectacol *B1,Spectacol *B2,int n);
int sumaTotala(Spectacol *B1,Spectacol *B2,int n);
void dealocareStruct(Spectacol *B1,int n);
void afisareSumTot(int sum);
void afisareSumSpec(Spectacol* Sum,int n);

