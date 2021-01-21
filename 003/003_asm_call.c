//003 Assembly Call
//Uso de codigo assembly dentro de codigo c

//Entrada de Dados
#include <stdio.h>
//Uso de System
#include <stdlib.h>

extern unsigned int _test ();

int main(void)
{
	printf("%d\n", _test());
	return 0;
}





