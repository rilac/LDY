#include <stdio.h>
int main()
{
	int n, P=0;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			P++;
	}
	if (P == 0)
		printf("It is a Prime Number.");
	else
		printf("It is not a Prime Number.");
	return 0;
}
