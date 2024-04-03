#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {

	char a=11;
	char *b=&a;

	printf("%p\n",&a);
	printf("%p\n",b);
	printf("%i\n", *b);

	return EXIT_SUCCESS;
}
