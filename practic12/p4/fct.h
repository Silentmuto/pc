



struct _traseu { 
	unsigned vec[100];
	int ltraseu;
	double pret;
};
typedef struct _traseu TRASEU;

unsigned **alocareMatrice(int dim);
unsigned **citireMatrice(unsigned **a,int dim);
void afisareMatrice(unsigned **a,int dim);
void citireVector(unsigned vec[],int dim);
void afisareVector(unsigned vec[],int dim);
