#include <stdio.h>
#include <stdlib.h>

int * stalinSort(int * array, int arrayLength, int * count);

// Stalin sort: sorting an array by looping through it starting from the left, and then removing elements who don't respect 
// the ascending order condition imposed.

int main(void) {
    int count = 1;
    int array[] = {5,1,3,7, 11, 13, 2,89,1,91};
    int * newArray = stalinSort(array, 10, &count);
    for (int i = 0; i < count ; i++) {
        printf(" %d ", newArray[i]);
    }
    free(newArray);
    return 0;
}

int * stalinSort(int * array, int arrayLength, int * count) {
    // We return the "sorted" array, i.e the array minus the elements that make it unsorted.
    int * newArray = (int *)malloc(sizeof(int) * *count);
    newArray[0] = array[0];
    if (newArray[0] > array[1]) {
        newArray[0] = array[1];
    }
    for (int i = 1; i < arrayLength - 1; i++) {
        if (array[i+1] > array[i]) {
            (*count)++;
            newArray = (int *)realloc(newArray, sizeof(int) * (*count));
            newArray[*count - 1] = array[i+1];
        } 
    }
    return newArray;
}
