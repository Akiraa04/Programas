
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]){
	const char *nombre="Natalia";

	char const *p = nombre;
        char const *r = nombre; // el contenido de r ahi es J.


	printf("%s\n",nombre);
	printf("\n");

	 while (*p != 0){
                printf("%c\n",*p);
                p++;
	 }

	   printf("\n");


	while (*r != 0) r++; // * es el contenido de lo que apunta r en este caso.
			      // & es direccion de la variable.
	do{
		r--;
		printf("%c\n",*r);

	} while (r != nombre); // mientras no llegue al principio

	printf("\n");

	return EXIT_SUCCESS;
}
// :r + nombre del archivo copia el contenido del archivo en el actual.
