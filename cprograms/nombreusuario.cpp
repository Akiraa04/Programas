

#include <stdio.h>
#include <stdlib.h>


//Cargar cosas a la memoria

int main (int argc,char *argv[]){

    char nombre[20];

    printf("Introduce tu nombre: ");
    printf("\n");
    scanf("%s",nombre);
    printf("Hola %s\n",nombre);


	return EXIT_SUCCESS;
}

