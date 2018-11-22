#include <stdio.h>

void printArray(int *a, int n) {
	for (int i = 0 ; i < n ; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

// change a and b values
void swap(int *a, int *b) {

	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void selectionSort(int *arr, int n) {

	int i, j, min;

	for (i = 0 ; i < n - 1 ; i++) {

		min = i;

		for (j = i + 1 ; j < n ; j++) {

			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);
		//printArray(arr, n); // prints selectionSort steps
	}

}

int main() {
	
	int s[] = {9,2,7,0,4,6,8,5,3,1};
	int size = 10;

	printArray(s, size); // prints initial array
	selectionSort(s, size);
	printArray(s, size); // prints ordered array

	return 0;
}