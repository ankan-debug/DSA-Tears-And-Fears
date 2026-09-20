/*
 * Program No.: 16
 * Program Name: Selection sort
 * Date: 24.08.26
 * Aim: Sort an array using selection sort.
 * Approach: Find the minimum in the unsorted suffix and place it at the
 * current output position.
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 16_selection_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>

void SelectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }
        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
    }
}

int main() {
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    
    SelectionSort(data, size);
    
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
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
