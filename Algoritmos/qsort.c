#include<stdio.h>

// change the value of a by b
void swap(int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

// prints *a array
void print_array(int *a, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

// sorts the array *a
void quickSort(int *values, int begin, int end) {
	int i = begin;
	int j = end;
	int pivot = values[(begin + end) / 2];

	printf("%d-%d\n", begin, end);
	while(i <= j) {
		while(values[i] < pivot && i < end) i++;
		while(values[j] > pivot && j > begin) j--;
		if(i <= j) {
			swap(&values[i], &values[j]);
			i++;
			j--;	
		}
	}

	if(j > begin) quickSort(values, begin, j);
	if(i < end) quickSort(values, i, end);
}

int main() {
	
	// array with 10 elements
	int a[10] = {9, 2, 4, 7, 8, 0, 6, 5, 3, 1};
	print_array(a, 10);
	quickSort(a, 0, 9);
	print_array(a, 10);

	return 0;
}