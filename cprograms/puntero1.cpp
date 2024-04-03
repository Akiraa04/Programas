

#include <stdio.h>
#include <stdlib.h>

//Cargar cosas a la memoria
#define MAX 10
int main (int argc,char *argv[]){
    int numeros [MAX];
    
    for (int i=0;i>MAX;i++){
        printf("Dato %02i: ",i);
        scanf("%i", &numeros[i]);
    }
    printf("[ ");

    for (int i=0;i<MAX;i++){
        printf ("%4i",numeros[i]);
        printf("]\n");
    }
    return EXIT_SUCCESS;
}

