/*
 * Program No.: 25
 * Program Name: Quick sort
 * Date: 07.09.26
 * Aim: Sort an integer array using quick sort.
 * Approach: Partition around a pivot and recursively sort the left and right
 * partitions, following the final quick-sort implementation in the record.
 * Time Complexity: O(n log n) average; O(n^2) worst-case
 * Space Complexity: O(log n) average recursion
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 07-Sorting/25_quick_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>

void swap(int array[], int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array, i, j);
            printf("Step: ");
            for (int k = low; k <= high; k++) {
                printf("%d ", array[k]);
            }
            printf("\n");
        }
    }
    swap(array, i + 1, high);
    printf("Step: ");
    for (int k = low; k <= high; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");
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
    int data[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(data) / sizeof(data[0]);
    
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    quickSort(data, 0, n - 1);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}

/*
 * Sample run:
 * Original array: 38 27 43 3 9 82 10
 * Sorted array: 3 9 10 27 38 43 82
 */
