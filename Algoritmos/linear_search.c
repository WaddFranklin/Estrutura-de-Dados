#include <stdio.h> // printf

// search for an element in an array
int linear_search(int *a, int size, int element) {
	int i;

	for(i = 0 ; i < size ; i++) {
		if (a[i] == element) {
			return i; // returns the index of the element
		}
	}
	return -1; // not found!
}

int main() {
	
	int a[10] = {12, 34, 7, 41, 99, 67, 54, 88, 0, 43};

	printf("99 --> index = %d\n", linear_search(a, 10, 99));
	printf("0 --> index = %d\n", linear_search(a, 10, 0));
	printf("100 --> index = %d\n", linear_search(a, 10, 100));
	printf("12 --> index = %d\n", linear_search(a, 10, 12));

	return 0;
}