//002 uso de argumentos para chamada no terminal
//Chamar no terminal como: ./nomedoarquivo.exe arg1 arg2

//Entrada de Dados
#include <stdio.h>
//Uso de System
#include <stdlib.h>

//argc quantidade de argumentos
//argv array de argumentos

//argv[0] sempre será a propria chamada de terminal

int main(int argc, char **argv){
	int x = 0, y = 0, i;
	
	if( argc != 3){
		//print ERROR
		printf("\t\t ARG Invalido (3)Necessarios\t\n");
	}
	else{
		//Return arguments
		printf("\t\t ARG(1) (%s) Valido\t\n", argv[0]);
		printf("\t\t ARG(2) (%s) Valido\t\n", argv[1]);
		printf("\t\t ARG(3) (%s) Valido\t\n\n\n", argv[2]);
		
		//Testa se Possui apenas um numero inteiro dentro do argv[1]
		if( sscanf(argv[1], "%d", &i) != 1 ){
			//print ERROR
			printf("\t\t ARG(2) Invalido\t\n");
		}
		else{
			//Scaneia se Possui apenas um numero inteiro
			//Salva numero na variavel i
			int ret = sscanf(argv[1], "%d", &i);
			x = i;
		}

		//Testa se Possui apenas um numero inteiro dentro do argv[2]
		if( sscanf(argv[2], "%d", &i) != 1 ){
			//print ERROR
			printf("\t\t ARG(3) Invalido\t\n");
		}
		else{
			//Scaneia se Possui apenas um numero inteiro
			//Salva numero na variavel i
			int ret = sscanf(argv[2], "%d", &i);
			y = i;
		}

		if( x != 0 && y !=0 ){
			printf("\t\t ARG2 * ARG3 = %d \t\n",x*y);
		}
	}
	
	return 0;
}



