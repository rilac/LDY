#include <math.h>
#include <stdio.h>

double Standard_Deviation(int array[5]) {
	double average = (array[0] + array[1] + array[2] + array[3] + array[4]) / 5;
	double ready = 0;
	for (int i = 0; i < 5; i++) {
		ready = ready + pow(array[i] - average, 2);
	}
	return sqrt(ready / 5);
}

int main() {
	int array[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
	double result = Standard_Deviation(array);
	printf("Standard Deviation = %.3f", result);
	return 0;
}