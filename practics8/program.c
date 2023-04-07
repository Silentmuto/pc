#include <stdio.h>
#include "vector.h"

int main(void)
{
	int s1[50], s2[50], ts[50];
	float vs1[50], vs2[50], pb[50], vst[50];

	int n;
	printf("n = ");
	scanf("%d", &n);

	/**
	 * CITIREA DATELOR
	 */

	printf("Pret per bucata = ");
	citireVectorFloat(pb, n);

	printf("Stocuri trioda 1 = ");
	citireVectorInt(s1, n);

	printf("Stocuri trioda 2 = ");
	citireVectorInt(s2, n);

	/**
	 * PROCESAREA DATELOR
	 */

	sumaVectoriInt(s1, s2, ts, n);

	inmultireScalara(s1, pb, vs1, n);
	inmultireScalara(s2, pb, vs2, n);
	
	sumaVectoriFloat(vs1, vs2, vst, n);

	/**
	 * AFISAREA DATELOR
	 */

	printf("\n\nRaport inventar pentru firma Trioda.\n\n");
	printf("Firma Trioda comercializeaza %d tipuri de componente electronice.\n", n);
	printf("Pret/bucata pentru fiecare componenta electronica: ");
	afisareVectorFloat(pb, n);
	printf("\n");
	printf("Stocuri magazin Trioda1 = ");
	afisareVectorInt(s1, n);
	printf("\n");
	printf("Stocuri magazin Trioda2 = ");
	afisareVectorInt(s2, n);
	printf("\n");
	printf("Total stocuri firma = ");
	afisareVectorInt(ts, n);
	printf("\n");
	printf("Valoare stocuri magazin Trioda1 = ");
	afisareVectorFloat(vs1, n);
	printf("\n");
	printf("Valoare stocuri magazin Trioda2 = ");
	afisareVectorFloat(vs2, n);
	printf("\n");
	printf("Valoare stocuri firma = ");
	afisareVectorFloat(vst, n);
	printf("\n");
	printf("Valoarea totala marfa = %.2f lei.", sumaTotalVector(vst, n)); 
	printf("\n\nSfarsit raport inventar.\n");

	return 0;
}
