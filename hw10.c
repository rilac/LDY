#include <stdio.h>
#include <string.h>

typedef struct city {
	char name[15];
	char country[15];
	int population;
}City;

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}
int main(void) {
	City arr[3];
	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++) {
		fputs("Name> ", stdout);
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		RemoveBSN(arr[i].name);
		fputs("Country> ", stdout);
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		RemoveBSN(arr[i].country);
		printf("Population> ");
		scanf(" %d", &arr[i].population);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s in %s with a population of %d people\n", arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}