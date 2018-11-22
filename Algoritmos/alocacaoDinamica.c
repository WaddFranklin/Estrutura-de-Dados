#include <stdlib.h>
#include <stdio.h>

int main() {

	int *v;

	v = malloc(3 * sizeof(int));

	v[0] = 22;
	v[1] = 500;
	v[2] = 32;

	printf("%d %d %d\n", v[0], v[1], v[2]);

	return 0;
}