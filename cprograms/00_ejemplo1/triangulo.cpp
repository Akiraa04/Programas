
#include <stdio.h>
#include <stdlib.h>

//CTRL + SHIFT + K para llamar a la ayuda

#define N 5
int main (int argc,char *argv[]){

    for (int i=0;i<N;i++) {
        for (int c=0;c<i;c++) {
            printf(" * ");
        }
    

        printf("\n");
    }

    printf("\n");

    for(int i=0;i<=N;i++){
        for (int k=N;k>i;k--){
            printf(" ");
              for(int j=0;j<i+1;j++){
                 printf(" * ");
                   printf("\n");
    }
    
  return EXIT_SUCCESS;
}



