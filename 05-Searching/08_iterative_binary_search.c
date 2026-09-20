/*
 * Program No.: 8
 * Program Name: Iterative binary search
 * Date: 10.08.26
 * Aim: Perform iterative binary search on a sorted array.
 * Approach: Repeatedly inspect the middle element and discard the half that
 * cannot contain the target.
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 08_iterative_binary_search.c -o program
 * Run: ./program
 */
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, target, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Element to search: ");
    scanf("%d", &target);
    result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Element found at position: %d\n", result + 1);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}
/*
 * Sample run:
 * Enter number of elements: 5
 * Enter 5 sorted elements: 12 24 36 48 60
 * Enter element to search: 48
 * Element found at position: 3
 */
