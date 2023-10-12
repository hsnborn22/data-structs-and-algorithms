#include <stdio.h>
#include <stdlib.h>

void quicksort(int arr[], int length);
void swap(int * a, int * b);

int main(void) {
	// Insert an unordered array
	int array[] = {11,20,1,7,3,5,45,1,2};
	// Insert array length
	int length = 9;
	quicksort(array,length);
	for (int k = 0; k < length; k++) {
		printf(" %d ", array[k]);
	}
	return 0;
}

// Swap procedure:

void swap(int * a, int * b) {
	int temp = * a;
	* a = * b;
	*b = temp;
}

// Quicksort

void quicksort(int arr[], int length) {
	// In worst case scenario time complexity asimptotically behaves like n^2, due to the nested for loop.
	for (int j = 0; j < length; j++) {
		// Looping through every element and comparing it with the next one
		for (int i = 0; i < length - 1; i++) {
			if (arr[i] > arr[i+1]) {
				swap(&arr[i],&arr[i+1]);
			}
		}
	}
}
