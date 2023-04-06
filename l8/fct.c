#include "fct.h"
#include <stdio.h>
#include <stdlib.h>

TIMP citireStruct()
{
	TIMP t;
	printf("Introduceti ora,minutul si secunda\n");
	scanf("%d%d%d",&t.ora, &t.minut, &t.secunda);
	return t;
}
void afisareStruct(TIMP t)
{
	printf("Ora este %d,minutul este %d,secunda este %d\n",t.ora, t.minut, t.secunda);
}
TIMP suma(TIMP t1, TIMP t2)
{
	TIMP ts;
	ts.secunda = 0;
	ts.minut = 0;
	ts.ora = 0;
	if((t1.secunda + t2.secunda) >= 60)
	{
		ts.secunda += (t1.secunda + t2.secunda) % 60;
		ts.minut++;
	}
	else
	{
		ts.secunda = t1.secunda + t2.secunda;
	}
	if((t1.minut + t2.minut) >= 60)
	{
		ts.minut += (t1.minut + t2.minut) % 60;
		ts.ora++;
	}
	ts.ora += (t1.ora + t2.ora);
	
	return ts;
}
