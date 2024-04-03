#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CTRL + SHIFT + K para llamar a la ayuda

int main (int argc,char *argv[]){
        char nombre[]="Natalia";
        char *pnom = nombre;

	printf("\t%lu\n", sizeof(nombre));
         printf("\t%lu\n", sizeof(pnom));

	printf("%s\n", nombre);

        for (int i=0; i<strlen(nombre); i++)
            printf(" %c",nombre[i]); // si se pone pnom el programa hace lo mismo

       printf("\n");

        for (int i=0; i<strlen(nombre); i++)
           printf ("%c ", *pnom);
        printf("\n");
	return EXIT_SUCCESS;
}
