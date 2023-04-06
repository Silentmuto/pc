#ifndef FCT_H_
#define FCT_H_

struct _TIMP {
	int ora,minut,secunda;
};
typedef struct _TIMP TIMP;
TIMP citireStruct();
void afisareStruct(TIMP t);
TIMP suma( TIMP t1, TIMP t2);
#endif
