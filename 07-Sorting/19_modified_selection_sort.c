/*
 * Program No.: 19
 * Program Name: Modified selection sort
 * Date: 24.08.26
 * Aim: Perform the modified selection-sort version recorded in the lab.
 * Approach: Select the minimum from the remaining range and swap only when
 * the minimum is not already at the current position.
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 19_modified_selection_sort.c -o program
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
        if (min_idx != step) {
            int temp = array[min_idx];
            array[min_idx] = array[step];
            array[step] = temp;
        }
        
        printf("Iteration %d: ", step + 1);
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int data[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
    
    SelectionSort(data, size);
    
    printf("Sorted Array\n");
    for (int i = 0; i < size; i++) {
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
