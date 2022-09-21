#include <stdio.h>

int main(void){
	double k, mile;
	printf("Please enter kilometers: ");
	scanf("%lf", &k);
	mile = k / 1.609;
	printf("%lf km is equal to %.1lf miles.", k, mile);
	return 0;
	}