#include "pb1_1header.h"

int main (void) {
	
	FRACTIE p, q;
	p=citire();
	q=citire();
	afisare(p);
	afisare(q);

	FRACTIE inv;
	inv=rasturnat(p);
	afisare(inv);

	FRACTIE prod;
	prod=produs(p, q);
	afisare(prod);	


	return 0;
}
