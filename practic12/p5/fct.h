struct _parcare {
	int id;
	int nr_locuri;
	unsigned pret;
};
typedef struct _parcare parcare;


unsigned *citireVector(int dim);
void afisareVector(unsigned *v,int dim);
parcare* citireStruct(int dim);
void afisareStruct(parcare* srt,int dim);
