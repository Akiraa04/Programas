#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 10
bool esta_repetido(int num,int lista[MAX],int hasta){
    bool repetido=false;
    //Si no esta en la lista
    for(int j=0;j<hasta;j++)
        if (lista[j==num])
            repetido=true;
    return repetido;
}

int main(int argc, char *argv[]) {
    int lista[MAX];
    for (int i=0;i<MAX;){
        int num;
        __fpurge(stdin);

        printf("Dato %02i: ",i+1);
        scanf("%i",&num);

        //lo incluyo
        if (esta_repetido(num,lista,i)){
            lista[i]= num;
            i++;
        }
    }

    //salida de datos
    printf ("[ ");
    for (int i=0; i<MAX; i++){
        printf ("%04i ", lista[i]);
        printf ("]\n");}


    return EXIT_SUCCESS;
}

