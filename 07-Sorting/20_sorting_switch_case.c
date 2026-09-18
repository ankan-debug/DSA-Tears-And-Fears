/*
 * Program No.: 20
 * Program Name: Switch-case to perform sorting
 * Date: 24.08.26
 * Aim: Select a sorting technique using a switch-case menu.
 * Approach: Read the array and dispatch to bubble, selection, or insertion
 * sort according to the chosen menu option.
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 20_sorting_switch_case.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
static void sort(int a[],size_t n,int c){if(c==1){for(size_t p=0;p<n;p++)for(size_t i=0;i+1<n-p;i++)if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;}}else if(c==2){for(size_t i=0;i<n;i++){size_t m=i;for(size_t j=i+1;j<n;j++)if(a[j]<a[m])m=j;if(m!=i){int t=a[i];a[i]=a[m];a[m]=t;}}}else{for(size_t i=1;i<n;i++){int k=a[i];size_t j=i;while(j>0&&a[j-1]>k){a[j]=a[j-1];--j;}a[j]=k;}}}
int main(void){int a[MAX_SIZE],c;size_t n;printf("Enter size of array: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;printf("Choose sorting technique:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\nEnter choice: ");if(scanf("%d",&c)!=1||c<1||c>3){printf("Invalid choice\n");return 1;}sort(a,n,c);printf("Sorted Array\n");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Enter size of array: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Choose sorting technique:
 * 1. Bubble Sort
 * 2. Selection Sort
 * 3. Insertion Sort
 * Enter choice: 2
 * Sorted Array
 * 1 4 5 6 7 8 9
 */