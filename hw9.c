#include <stdio.h>
#include <string.h>

int main() {
	char str[30];
	int diff = 'a' - 'A';
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;
	}
	printf("Output> %s", str);
	return 0;
}