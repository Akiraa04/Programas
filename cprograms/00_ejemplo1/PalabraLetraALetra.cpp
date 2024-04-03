#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]){
	const char *nombre="Jorge";

	char const *p = nombre;

	printf("%s\n",nombre);

	while (*p != 0){
		printf("%c\n",*p);
		p++;
	}
	
	printf("\n");

	return EXIT_SUCCESS;
}
