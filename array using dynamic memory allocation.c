#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2;
	int *arr;

	printf("Enter n1: ");
	scanf("%d", &n1);

	arr = (int *)malloc(n1 * sizeof(int));

	printf("Enter %d values: ", n1);
	for (int i = 0; i < n1; i++) scanf("%d", &arr[i]);

	printf("Enter n2: ");
	scanf("%d", &n2);

	arr = (int *)realloc(arr, (n1 + n2) * sizeof(int));

	printf("Enter %d more values: ", n2);
	for (int i = n1; i < n1 + n2; i++) scanf("%d", &arr[i]);

	printf("Array values: ");
	for (int i = 0; i < n1 + n2; i++) printf("%d ", arr[i]);
	
	printf("\n");

	free(arr);
	return 0;
}
