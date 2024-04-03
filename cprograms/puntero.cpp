
#include <stdio.h>
#include <stdlib.h>

//Cargar cosas a la memoria

int main (int argc,char *argv[]){
    char *palabra = NULL;

    printf("Palabra: ");
    scanf("%ms", &palabra);
    printf("[%p] %s !!!!!\n",palabra,palabra);

    free(palabra);


    return EXIT_SUCCESS;
}

