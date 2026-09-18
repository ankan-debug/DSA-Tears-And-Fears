/*
 * Program No.: 24
 * Program Name: Insertion sort and binary search
 * Date: 07.09.26
 * Aim: Sort an unsorted array using insertion sort and search it with binary search.
 * Approach: First sort the input with insertion sort; then use binary search on
 * the resulting sorted sequence.
 * Time Complexity: O(n^2 + log n)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 24_insertion_sort_then_binary_search.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
static void insertion(int a[],size_t n){for(size_t i=1;i<n;i++){int k=a[i];size_t j=i;while(j&&a[j-1]>k){a[j]=a[j-1];--j;}a[j]=k;}}
static int binary(const int a[],size_t n,int t){size_t l=0,r=n;while(l<r){size_t m=l+(r-l)/2;if(a[m]==t)return(int)m;if(a[m]<t)l=m+1;else r=m;}return -1;}
int main(void){int a[MAX_SIZE],t;size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;insertion(a,n);printf("Array after insertion sort: ");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");printf("Enter element to search: ");if(scanf("%d",&t)!=1)return 1;int p=binary(a,n,t);if(p>=0)printf("Element %d found at index %d\n",t,p);else printf("Element %d not found\n",t);return 0;}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 64 34 25 12 22 11 90
 * Array after insertion sort: 11 12 22 25 34 64 90
 * Enter element to search: 25
 * Element 25 found at index 3
 */