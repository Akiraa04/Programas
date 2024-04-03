#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
    unsigned l = 1;
    char caracter = 'a';

    for (unsigned car=0; car<27; car++)
        for (unsigned letra=0; letra<27; letra++)
            printf ("%c", caracter + car);

    return EXIT_SUCCESS;
}

