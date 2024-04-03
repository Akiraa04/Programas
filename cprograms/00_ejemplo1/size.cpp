#include <limits.h> // se usa para saber los limites del dato introducido
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]){
	short a;  //long duplica el tamaño de cuatro pasa a ocho y short lo divide entre dos.

	printf("Tamaño de a:\t%lu\n", sizeof(a));// \t sirve para tabular.
	printf("Tamaño de int: \t%lu\n", sizeof(int)); // %u signufica unsigned.
	printf("a tiene basura, a: %i\n", a); // sizeof devuelve ocho bites.
					 
       printf("\n");

	printf("Maximo: %i\n",SHRT_MAX);
	printf("Minimo: %i\n",SHRT_MIN);


	return EXIT_SUCCESS;
}
