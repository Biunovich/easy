#include <stdio.h>
#include <stdlib.h>
typedef struct Comlex
{
	double Re;
	double Im;
} Comlex;
Comlex plus(Comlex x,Comlex y);
Comlex minus(Comlex x,Comlex y);
Comlex devide(Comlex x,Comlex y);
Comlex mult(Comlex x,Comlex y);
