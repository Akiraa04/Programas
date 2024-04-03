
#include <stdio.h>
#include <stdlib.h>

//CTRL + SHIFT + K para llamar a la ayuda

#define N 5
int main (int argc,char *argv[]){

    for (int filaCuad=0;filaCuad<N;filaCuad++)
        for (int fila=0;fila<N;fila++){
            for (int columna=0;columna<N;columna++)
                for( int col=0;col<N;col++)
                    if ((filaCuad+columna)%2==0)
                        printf(" * ");
                    else 
                        printf(" - ");

    printf("\n");
        }

	return EXIT_SUCCESS;
}

