#include <stdio.h>

void printArray(int *a, int n) {
	for (int i = 0 ; i < n ; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void insertionSort(int a*, int size) {

	int i, j, key;

	for (i = 1 ; i < size ; i++) {

		key = a[i];
		j = i - 1;

		while ((j >= 0) && (a[j] > key)) {

			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = key;
	}
}

int main() {
	
	int a[] = {9,2,7,0,4,6,8,5,3,1};
	int size = 10;

	printArray(a, size); // prints initial array
	insertionSort(a, size);
	printArray(a, size); // prints ordered array

	return 0;
}