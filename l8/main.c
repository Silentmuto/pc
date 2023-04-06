#include "fct.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	TIMP t1,t2,ts;
	t1 = citireStruct();
	t2 = citireStruct();
	ts = suma(t1,t2);
	afisareStruct(t1);
	afisareStruct(t2);
	afisareStruct(ts);
	return 0;
}

