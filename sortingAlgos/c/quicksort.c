#include <stdio.h>
#include <stdlib.h>

// Defining functions/procedures we will use throughout the algorithm implementation
void quicksort(int * arr, int left, int right, int arrayLength);
int partition(int * arr, int left, int right, int arrayLength);
void swap(int * a, int * b);

int main(void) {
    int test[] = {7,1,22,4,5,1,9};
    int length = 7;
    quicksort(test,0,6, 7);
    for (int i = 0; i < length; i++) {
        printf(" %d ", test[i]);
    }
    return 0;
}

void swap(int * a, int * b) {
    int temp = * a;
    *a = * b;
    *b = temp;
}

int partition(int * arr, int left, int right, int arrayLength) {
    int i = left;
    int j = right - 1;
    int pivot = arr[right];

    while (i < j) {
        while (i < right && arr[i] < pivot) {
            i++;
        }
        while (j > left && arr[j] >= pivot) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }

    }
    if (arr[i] > pivot) {
        swap(&arr[i], &arr[right]);
    }
    return i;
}

void quicksort(int * arr, int left, int right, int arrayLength) {
    int index;
    if (left < right) {
        index = partition(arr, left,right,arrayLength);
        quicksort(arr,left,index - 1, arrayLength);
        quicksort(arr,index + 1, right, arrayLength);
    }
}