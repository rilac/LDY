#include <stdio.h>


int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int temp;

	printf("Before swapping\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", *ptr1);
		ptr1++;
	}
	printf("\n\n");

	for (int i = 0; i < 6; i++) {
		printf("%d ", *ptr2);
		ptr2++;
	}
	// 여기까지의 코드는 배열 초기화, 포인트 변수 지정, temp 변수 swap 이용 예정

	// swap 과정
	for (int i = 0; i < 6; i++) {
		temp = *--ptr1;
		*ptr1 = *--ptr2;
		*ptr2 = temp;
	}

	//swap된 배열1 출력
	printf("\n\n");
	printf("After swapping\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", *ptr1);
		ptr1++;
	}
	printf("\n\n");

	// swap된 배열2 출력
	for (int i = 0; i < 6; i++) {
		printf("%d ", *ptr2);
		ptr2++;
	}
	return 0;
}