
#include <stdio.h>
#include <stdlib.h>

//Cargar cosas a la memoria

int main (int argc,char *argv[]){
    char dato[30];

    printf("Introduce una fecha: ");
    scanf("%s", dato);
    printf("La fecha introducida es %s\n",dato);


    return EXIT_SUCCESS;
}

