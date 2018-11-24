#include <stdio.h>

// iterative binary search
// only for ordered arrays
int binary_search(int *a, int size, int element) {

	int begin = 0; 
	int end = size - 1;
	int middle;

	while(begin <= end) {
		middle = (begin + end) / 2; // calculates the half of the array
		if(a[middle] < element) {
			begin = middle + 1;
		}
		else if (a[middle] > element) {
			end = middle - 1;
		}
		else { // a[middle] == element
			return middle;
		}
	}
	return -1; // not found!
}

int main() {
	
	int a[10] = {0, 7, 12, 34, 41, 43, 54, 67, 88, 99};

	printf("99 --> index = %d\n", binary_search(a, 10, 99));
	printf("0 --> index = %d\n", binary_search(a, 10, 0));
	printf("100 --> index = %d\n", binary_search(a, 10, 100));
	printf("12 --> index = %d\n", binary_search(a, 10, 12));

	return 0;
}