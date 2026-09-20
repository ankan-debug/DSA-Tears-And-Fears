/*
 * Program No.: 5
 * Program Name: Insertion in an array
 * Date: 10.08.26
 * Aim: Insert an element at a specified position in an array.
 * Approach: Insert an element at a specified position in an array. Approach: Shift elements one position to the right from the end toward the insertion point, then place the new value at that position.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 03-Arrays/05_array_insertion.c -lm -o build/03-Arrays/05_array_insertion
 * Run: ./build/03-Arrays/05_array_insertion
 */
// Write a C program to perform insertion in an array using function.
// Code:
#include <stdio.h>
int insert (int arr[], int n, int element, int pos) {
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;
    return n;
}
int main () {
    int arr[100], n, element, pos;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter elements to insert: ");
    scanf("%d", &element);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    n = insert(arr, n, element, pos);
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
 * Sample run:
 * Enter number of elements: Enter 4 elements: Enter element to insert: Enter position (0 to 4): Array after insertion: 10 20 30 40 50
 */
