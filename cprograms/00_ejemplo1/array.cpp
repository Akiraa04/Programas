
#include <stdio.h>
#include <stdlib.h>

//CTRL + SHIFT + K para llamar a la ayuda

#define N 15
int main (int argc,char *argv[]){
        unsigned long array[N];
        array[0]=1;
        array[1]=1;

      for (int n=2; n<N; n++){
           array[n]=array[n-1] + array[n-2];
            printf(" %lu\n",array[n]);
                    }

      printf("\n");

      for (int i=0; i<N; i++){
          printf(" %lu\n",array[i]); // si se pone pnom el programa hace lo mismo
       }


	return EXIT_SUCCESS;
}

