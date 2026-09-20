/*
 * Program No.: 22
 * Program Name: Merge sort
 * Date: 31.08.26
 * Aim: Perform the merge-sort program listed as “Merge Sort Junction” in the index.
 * Approach: Recursively divide the array and merge adjacent sorted ranges.
 * Time Complexity: O(n log n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 22_merge_sort_junction.c -o program
 * Run: ./program
 */
#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++) {
        M[j] = arr[q + 1 + j];
    }
    
    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

int main() {
    int arr[] = {3, 8, 9, 1, 5, 7};
    merge(arr, 0, 2, 5);
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 38 27 43 3 9 82 10
 * Sorted Array
 * 3 9 10 27 38 43 82
 */
