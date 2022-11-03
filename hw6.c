#include <stdio.h>
int main(void) {
	int arr[5];
	int odd[5] = { 0,0,0,0,0 };
	int even[5] = { 0,0,0,0,0 };
	int step = 0;

	printf("배열에 들어갈 숫자 5개를 입력하세요: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	step++;

	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {even[i] = arr[i];}
		else if (arr[i] % 2 != 0) {odd[i] = arr[i];}
	}
	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (odd[i] == 0)
			continue;
		else printf("%d ", odd[i]);
	}

	printf("\n\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (even[i] == 0) {
			continue;
		}
		else printf("%d ", even[i]);
	}
	return 0;
}