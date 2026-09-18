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

static void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

static int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int smaller = low - 1;
    for (int index = low; index < high; ++index) {
        if (array[index] <= pivot) {
            ++smaller;
            swap(&array[smaller], &array[index]);
        }
    }
    swap(&array[smaller + 1], &array[high]);
    return smaller + 1;
}

static void quick_sort(int array[], int low, int high)
{
    if (low < high) {
        int pivot_index = partition(array, low, high);
        quick_sort(array, low, pivot_index - 1);
        quick_sort(array, pivot_index + 1, high);
    }
}

int main(void)
{
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (size_t index = 0U; index < size; ++index) {
        printf("%d%s", array[index], index + 1U == size ? "\n" : " ");
    }

    quick_sort(array, 0, (int)size - 1);

    printf("Sorted array: ");
    for (size_t index = 0U; index < size; ++index) {
        printf("%d%s", array[index], index + 1U == size ? "\n" : " ");
    }
    return 0;
}

/*
 * Sample run:
 * Original array: 38 27 43 3 9 82 10
 * Sorted array: 3 9 10 27 38 43 82
 */