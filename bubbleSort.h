#ifndef _BUBBLESORT_H
#define _BUBBLESORT_H

#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

#ifdef __cplusplus
extern "C" {
    int ascending(int, int);
    int descending(int, int);
    void bubbleSort(int* arr, int len, int(*compar)(int, int));
}
#endif

#endif