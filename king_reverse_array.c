/**
 * An exercise from 8.1 of C Programming: A Modern Approach, by K.N. King.
 */

/* Reverse a series of numbers */

#include <stdio.h>

#define N 10

int main(void)
{
	int a[N], i;
	
	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("In reverse order:");
	for (i = N - 1; i >= 0; i--) {
		printf(" %d", a[i]);
	}
	printf("\n");
	
	int b[N] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};
	for (i = 0; i < N; i++) {
		printf(" %d", b[i]);
	}
	
	return 0;
}