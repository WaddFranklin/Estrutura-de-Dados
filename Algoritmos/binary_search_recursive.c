#include <stdio.h>

// recursive binary search
// only for ordered arrays
int binary_search(int *a, int begin, int end, int element) {

	if(begin > end) {
		return -1; // not found!
	}
	
	int middle = (begin + end) / 2;
	if(a[middle] > element) {
		binary_search(a, begin, middle - 1, element);
	}
	else if(a[middle] < element) {
		binary_search(a, middle + 1, end, element);
	}
	else { 
		return middle; // a[middle] == element
	}
}

int main() {
	
	int a[10] = {0, 7, 12, 34, 41, 43, 54, 67, 88, 99};

	printf("0 --> index = %d\n", binary_search(a, 0, 9, 0));
	printf("99 --> index = %d\n", binary_search(a, 0, 9, 99));
	printf("100 --> index = %d\n", binary_search(a, 0, 9, 100));
	printf("43 --> index = %d\n", binary_search(a, 0, 9, 43));

	return 0;
}