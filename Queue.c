#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = 0, rear = 0;

void enqueue(int data) {
    if (rear < MAX) {
        queue[rear++] = data;
    }
}

int dequeue() {
    if (front < rear) {
        return queue[front++];
    }
    return -1;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());

    return 0;
}