#include <stdio.h>

/* Warning: This program is wrong on purpose. */

int main() {

	int age = 19;
	/* Do not initialize height variable */
	int height;
	
	/* Remove age variable  */
	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);
	
	return 0;
}
