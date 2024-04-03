
#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100
#define PREGUNTA (ntipo,sform,var)
  printf("Mete un %s: ",#ntipo); \
  scanf(sform,&var); \ //& significa direccion
  printf("El %s contiene: %i\n",#ntipo,(int) var);

//Cargar cosas a la memoria

int main (int argc,char *argv[]){

    char bytes[MAX];
    char un_byte;

    int entero;
    unsigned sinsigno;
    long int largo;
    unsigned long int ess;

    int aent[MAX];

    double real;

    // Leer un caracter
    PREGUNTA(caracter,"%c",un_byte);

    //leer entero
    PREGUNTA(entero,"%i",entero);


	return EXIT_SUCCESS;
}

