#include <stdio.h>
#include <stdlib.h>

void quicksort(int arr[], int length);
void swap(int * a, int * b);

int main(void) {
	int array[] = {11,20,1,7,3,5,45,1,2};
	int length = 9;
	quicksort(array,length);
	for (int k = 0; k < length; k++) {
		printf(" %d ", array[k]);
	}
	return 0;
}

void swap(int * a, int * b) {
	int temp = * a;
	* a = * b;
	*b = temp;
}

void quicksort(int arr[], int length) {
	for (int j = 0; j < length; j++) {
		for (int i = 0; i < length - 1; i++) {
			if (arr[i] > arr[i+1]) {
				swap(&arr[i],&arr[i+1]);
			}
		}
	}
}
