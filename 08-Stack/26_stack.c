/*
 * Program No.: 26
 * Program Name: Stack
 * Date: Not specified in source
 * Aim: Implement a stack using an array with push, pop, peek, and display operations.
 * Approach: Maintain a top index. Push inserts at top, pop removes from top,
 * peek reads the top element, and display prints elements from top to bottom.
 * Time Complexity: O(1) for push, pop, peek; O(n) for display
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 08-Stack/26_stack.c -o program
 * Run: ./program
 */

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull(void)
{
    return top == MAX - 1;
}

int isEmpty(void)
{
    return top == -1;
}

void push(int value)
{
    if (isFull()) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d\n", value);
    }
}

int pop(void)
{
    if (isEmpty()) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

int peek(void)
{
    if (isEmpty()) {
        printf("Stack Empty\n");
        return -1;
    }
    return stack[top];
}

void display(void)
{
    if (isEmpty()) {
        printf("Empty\n");
        return;
    }

    printf("Stack Elements:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(void)
{
    push(10);
    push(20);
    push(30);
    display();

    printf("Top Element = %d\n", peek());
    printf("Popped = %d\n", pop());
    display();

    return 0;
}

/*
 * Sample output:
 * Pushed 10
 * Pushed 20
 * Pushed 30
 * Stack Elements:
 * 30 20 10
 * Top Element = 30
 * Popped = 30
 * Stack Elements:
 * 20 10
 */