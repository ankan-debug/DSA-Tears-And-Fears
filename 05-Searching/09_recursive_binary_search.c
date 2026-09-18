/*
 * Program No.: 9
 * Program Name: Recursive binary search
 * Date: 10.08.26
 * Aim: Perform recursive binary search on a sorted array.
 * Approach: Compare the middle element and recursively continue in the
 * appropriate half of the current search range.
 * Time Complexity: O(log n)
 * Space Complexity: O(log n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 09_recursive_binary_search.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
static int search(const int a[],int l,int r,int t){if(l>r)return -1;int m=l+(r-l)/2;if(a[m]==t)return m;if(a[m]>t)return search(a,l,m-1,t);return search(a,m+1,r,t);}
int main(void){int a[MAX_SIZE],t;size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu sorted elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;printf("Enter element to search: ");if(scanf("%d",&t)!=1)return 1;int p=search(a,0,(int)n-1,t);if(p>=0)printf("Element found at position: %d\n",p);else printf("Element not found\n");return 0;}
/*
 * Sample run:
 * Enter number of elements: 5
 * Enter 5 sorted elements: 10 20 30 40 50
 * Enter element to search: 30
 * Element found at position: 2
 */