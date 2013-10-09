#include <stdio.h>

/*
 * Calculate the average of two numbers
 */

double average(double, double);

int main() {
	
	double num1, num2;
	
	printf("Enter two numbers to determine the average of\n");
	scanf("%lf %lf", &num1, &num2);
	
	printf("The average of %g and %g is: %g\n", num1, num2, average(num1, num2));
	
	return 0;
}

double average(double a, double b) {
	return ((a + b) / 2);
}