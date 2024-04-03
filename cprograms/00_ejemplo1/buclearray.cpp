#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

#define N 6
int main (int argc,char *argv[]){
unsigned array[N][N];
bzero(array,sizeof(array)); // memset(A, 0, sizeof(A);

// equivalente a inicializar
   // for ( int i=0;i<N;i++) {
       // for (int c=0;c<N;c++) {
           // array[i][c]=0;
array[0][0]=1;

for (int i=1;i<N;i++)
    for (int j=0;j<N;j++)
      //  if (j==0)
            array[i][j]=(j==0)?1 : array[i][j]=array[i-1][j]+array[i-1][j-1]; //: sustituye al else y (j==0)?1 equivale al if
       //else
           // array[i][j]=array[i-1][j]+array[i-1][j-1];


 for ( int i=1;i<N;i++) {
        for (int j=0;j<N;j++) {
            printf("%u",array[i][j]);
   }
         printf("\n");

  }
	return EXIT_SUCCESS;
}

