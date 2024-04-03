#include <stdio.h>
#include <stdlib.h>

int sumar (int num1,int num2){
   int resultado=num1+num2;

   return resultado;
}

  int restar(int num1,int num2){
    int resultado=num1-num2;
    return resultado;
}

int multiplicar (int num1,int num2){
      int resultado=num1*num2;

      return resultado;
   }
int dividir (int num1,int num2){
    int resultado=num1/num2;

      return resultado;
   }

#define suma 1
#define resta 2
#define multiplicacion 3
#define division 4

int main(int argc, char *argv[]) {

    unsigned operacion;
    int resultado;
    int num1,num2;

    printf("Introduce un numero:");
    scanf("%i",num1);
    printf("Introduce otro numero:");
    scanf("%i",num2);
    printf("Que operacion quieres realizar:");
    scanf("%[1-4]",operacion);

    switch (operacion){
        case 1:
        resultado=sumar(num1,num2);
        break;
        case 2:
        resultado=restar(num1,num2);
        break;
        case 3:
        resultado=multiplicar(num1,num2);
        break;
        case 4:
        resultado=dividir(num1,num2);
        break;
        default: 
            fprintf(stderr,"No se que hacer\n");
            return EXIT_FAILURE;
            break;
    }

    printf("El resultado es: %i ",resultado);



    return EXIT_SUCCESS;
}


