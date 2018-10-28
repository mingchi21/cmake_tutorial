#include "bubbleSort.h"

void bubbleTo(int* arr, int to, int(*compar)(int, int)) {
    int i;
    for(i = 0; i < to - 1; i++) if(compar(arr[i + 1], arr[i]) < 0) {
        SWAP(arr[i + 1], arr[i]);
    }
}

void bubbleSort(int* arr, int len, int(*compar)(int, int)) {
    int i;
    for(i = 0; i < len; i++) { 
        bubbleTo(arr, len - i, compar); 
    }
}

int ascending(int a, int b) { return a - b; }
int descending(int a, int b) { return -ascending(a, b); }


