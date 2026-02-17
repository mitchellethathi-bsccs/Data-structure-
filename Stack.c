#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int stack[MAX];
int top = -1;

void push(int data) {
    if (top < MAX - 1) {
        stack[++top] = data;
    } else {
        printf("Stack overflow\n");
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}

void printStack() {
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    // Push elements
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    // Print stack
    printf("Elements: ");
    printStack();

    // Pop an element
    printf("Popped element: %d\n", pop());
    printf("Elements after pop: ");
    printStack();

    return 0;
}