/*
 * Program No.: 18
 * Program Name: Modified bubble sort
 * Date: 24.08.26
 * Aim: Perform the modified bubble sort recorded in the lab.
 * Approach: Track whether a pass performed a swap and stop immediately when
 * the array is already sorted.
 * Time Complexity: O(n^2) worst-case; O(n) best-case
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 18_modified_bubble_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int size;
    printf("Enter number of Elements: ");
    scanf("%d", &size);
    
    int data[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &data[i]);
    }
    
    bubbleSort(data, size);
    
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
