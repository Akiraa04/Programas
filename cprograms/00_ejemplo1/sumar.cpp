#include <stdio.h>
#include <stdlib.h>


void usage(FILE *where,const char *error_mssg) {

    fprintf (where, "ERROR: %s !!!!\n", error_mssg);

    if ( where == stderr )
        exit (1);
}

int main (int argc, char *argv[]) {

    int resultado = 0;

    // Check parameters
    if (argc < 2)
        usage(stderr, "Se necesita, al menos, un argumento");

    // Operations
    for (int i=1; i<argc; i++)
        resultado += atoi(argv[i]);

    // Output
    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}



