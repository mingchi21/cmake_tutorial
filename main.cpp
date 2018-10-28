#include <stdio.h>
#include <stdlib.h>

#include "bubbleSort.h"

int number[] = {10, 9, 1, 2, 5, 3, 8, 7}; 
static void _print(int* arr, int len) {
    int i;
    for(i = 0; i < len; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n");
}


int main(int, char**) {    
    int len = sizeof(number)/sizeof(int);
    char c;

    bubbleSort(number, len, ascending);
    _print(number, len);
    c = getchar();
}
