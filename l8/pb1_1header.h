#ifndef _DA
#define _DA

struct _FRACTIE {
	int x, y;
};
typedef struct _FRACTIE FRACTIE;

FRACTIE  citire();
void afisare(FRACTIE p);
FRACTIE rasturnat(FRACTIE p);
FRACTIE produs(FRACTIE p, FRACTIE q);

#endif
