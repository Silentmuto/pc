#include <stdio.h>
#include "pb1_1header.h"

FRACTIE citire() {
	FRACTIE p;
	scanf("%d%d", &p.x, &p.y);
	return p;
}

void afisare(FRACTIE p) {
	printf("%d/%d\n", p.x, p.y);
}

FRACTIE rasturnat(FRACTIE p) {
	int aux;
	aux=p.x;
	p.x=p.y;
	p.y=aux;
	return p;
}

FRACTIE produs(FRACTIE p, FRACTIE q) {
	FRACTIE prod;
	prod.x = p.x*q.x;
        prod.y = p.y*q.y;
	return prod;
}	
