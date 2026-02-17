#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addEdge(Node* graph[], int u, int v) {
    Node* newNode = createNode(v);
    newNode->next = graph[u];
    graph[u] = newNode;
}

void printGraph(Node* graph[]) {
    for (int i = 0; i < MAX; i++) {
        Node* temp = graph[i];
        printf("%d -> ", i);
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    Node* graph[MAX];
    for (int i = 0; i < MAX; i++) {
        graph[i] = NULL;
    }

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    printf("Adjacency list: \n");
    printGraph(graph);

return 0;
}
