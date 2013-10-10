#include <stdio.h>
#include <math.h>

/*
 * Generate a text file of numbers to perform regular expressions on
 */

int main() {
	
	FILE *fp = fopen("generated_numbers.txt", "w");
	
	for (int i = 0; i < (1000000); i++) {
		fprintf(fp, "%d\n", i);
	}
	
	return 0;
}