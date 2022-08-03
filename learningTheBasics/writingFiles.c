#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/* Creating and writing the file */
	FILE *fpointer = fopen("test.txt", "w");

	fprintf(fpointer, "Hello\nThere\n");

	fclose(fpointer);

	/* Appending more text */
	FILE *fpointer2 = fopen("test.txt", "a");

	fprintf(fpointer2, "\nGeneral\nKenobi");

	fclose(fpointer2);
	return 0;
}