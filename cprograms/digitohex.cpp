#include <stdio.h>
#include <stdlib.h>

#define MAX 15
//Cargar cosas a la memoria

int main (int argc,char *argv[]){
    char dato[MAX];

    printf("Introduce un dato: ");
    scanf("%[0-9A-Fa-f]", dato);
    printf(" %s\n",dato);


    return EXIT_SUCCESS;
}

