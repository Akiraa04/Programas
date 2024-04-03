#include <stdio.h>
#include <stdlib.h>


void usage(FILE *where,const char *error_mssg) {

    fprintf (where, "ERROR: %s !!!!\n", error_mssg);

    if ( where == stderr )
        exit (1);
}

int main (int argc, char *argv[]) {

    int resultado = 0

    int op1,        // Operand 1
        op2,        // Operand 2
        resultado;

    // Check parameters
    if (argc < 3)
        usage(stderr, "Se necesitan dos argumentos");

    // Operations
    op1 = atoi(argv[1]);
    op2 = atoi(argv[2]);
    resultado = op1 + op2;

    // Output
    printf( "%i + %i = %i\n", op1, op2, resultado  );

    return EXIT_SUCCESS;
}

