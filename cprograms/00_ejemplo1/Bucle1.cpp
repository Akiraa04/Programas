#include <stdio.h>
#include <stdlib.h>

//CTRL + SHIFT + K para llamar a la ayuda

#define N 5
int main (int argc,char *argv[]){

    for (int i=0;i<5;i++) {
        for (int c=0;c<5;c++) {
            printf(" * ");
        }

        printf("\n");
    }

    printf("\n");

    for(int i=0;i<5;i++){
        printf("\n");
        for(int n=0;n<i;n++){
            printf(" * ");
        }

        printf("\n");
    }


	return EXIT_SUCCESS;
}

