/*
 * Program No.: 21
 * Program Name: Quick sort
 * Date: 31.08.26
 * Aim: Sort an array using quick sort.
 * Approach: Partition around the last element as pivot and recursively sort
 * the two resulting partitions.
 * Time Complexity: O(n log n) average; O(n^2) worst-case
 * Space Complexity: O(log n) average recursion
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 21_quick_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    
    quickSort(data, 0, size - 1);
    
    printf("Sorted Array\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted array: 1 4 5 6 7 8 9
 */
